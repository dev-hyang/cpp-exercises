#include<iostream>
using namespace std;

class C2
{
  int x;
  std::vector<int>& v1;
public:
  C2(){
    cout<<"C2 constructor"<<endl;
    x = 2;
  };
  C2(const C2& c2_inst1)
  {
    cout<<"C2 copy constructor"<<endl;
    x = c2_inst1.x;
  }
  ~C2()
  {
    cout<<"C2 destructor"<<endl;
  }
  int getX()
  {
    return x;
  }
};

class C1
{
  int i;
  C2& inst_c2;//ref cannot be inited except in initialization list
public:
  C1(int i_,C2& c2):inst_c2(c2)//ref init will not call copy constructor
  {
    cout<<"C1 constructor"<<endl;
    i = i_;
  };
  ~C1(){
    cout<<"C1 destructor"<<endl;
  };
  int getI(){return i;}
  int getX(){return inst_c2.getX();}
};
int main(int argc, char const *argv[]) {
  /* code */
  C2* c2 = new C2();
  C1 c1(220,*c2);
  C1& c21 = c1;//reference here has no new obj created
  C1& c22 = c1;
  delete c2;
  cout<<c1.getI()<<","<<c1.getX()<<endl;
  return 0;
}
