#include<iostream>
using namespace std;
class A{
public:
    int x;
public:
    A(int x_){x = x_;}
    A(A& a){
      x = a.x;
      cout<<"copy constructor called"<<endl;
    }
};

A foo(){
  A b(4);
  cout<<"the add of b is:"<<&b<<endl;
  return b;
}

int main(){
  const A& c = foo();//bcz here we memorize the reference of the temp obj in foo's frame stack
  cout<<"foo() is:"<<&c<<endl;
  cout<<"foo().x is"<<c.x<<endl;
  //whatif this case, what the temp add then?
  cout<<"foo().x is"<<foo().x<<endl;
}

/*
10-8-228-170:src dahang$ g++ CopyConstructorTest1.cpp -o main.out
CopyConstructorTest1.cpp:21:22: error: taking the address of a temporary object of type 'A'
      [-Waddress-of-temporary]
  cout<<"foo() is:"<<&foo()<<endl;
                     ^~~~~~
1 error generated.
10-8-228-170:src dahang$ g++ CopyConstructorTest1.cpp -o main.out
CopyConstructorTest1.cpp:21:22: error: taking the address of a temporary object of type 'A'
      [-Waddress-of-temporary]
  cout<<"foo() is:"<<&(foo())<<endl;
  */
