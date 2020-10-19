#include <iostream>
using namespace std;

class C1
{
  int i;
public:
  C1();
  ~C1();
  //inline int getI(){return i;}
private:
  class C2
  {
    friend class C1;
    int j;
    C2();
    ~C2();
    inline void foo(){cout<<i<<endl;};
  };
  C2 inst_c2;//can be seen only after C2 definition/declaration
};

C1::C1()
{
  // C2();
  cout<<"C1 default constructor"<<endl;
  //i = 0;
}

C1::~C1()
{
  // C2();
  cout<<"C1 destructor"<<endl;
}

C1::C2::C2()
{
  cout<<"C2 default constructor"<<endl;
  j = 1;
}

C1::C2::~C2()
{
  cout<<"C2 destructor"<<endl;
}

int main(int argc, char const *argv[]) {
  /* code */
  C1 c1;
  //cout<<c1.i<<endl;
  return 0;
}
