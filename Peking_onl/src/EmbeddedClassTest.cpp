#include<iostream>
using namespace std;

class C1{
  int i;

  class C2{

  public:
    inline C2(){};
    inline C2(const C2&){
      cout<<"C2 constructor is called"<<endl;
    }
    inline ~C2(){
      cout<<"C2 destructor is called"<<endl;
    }
  };

  C2 inst_c2;
public:
  C1();
  C1(const C1&);
  ~C1();
};

C1::C1()
{
  i = 0;
  // inst_c2 = C2();
  cout<<"c1 default constructor is called"<<endl;
}

C1::C1(const C1& c1)
{
  cout<<"C1 copy constructor is called"<<endl;
  i = c1.i;
  inst_c2 = c1.inst_c2;//will this called C2(inst_c2)? No, it will not
  //this is just an assignment
  // cout<<"end C1 copy constructor is called"<<endl;
}

C1::~C1()
{
  cout<<"C1 destructor is called"<<endl;
}

int main(int argc, char const *argv[]) {

  C1 c1;
  C1 c11(c1);
  C1 c12 = c11;
  return 0;
}
