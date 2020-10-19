#include<iostream>
using namespace std;

class CTest
{
private:
  int n;
public:
  CTest();
  int GetValue() const;
  // int GetValue();
};

inline CTest::CTest(){n=1;}

inline int CTest::GetValue() const{return n;}

// inline int CTest::GetValue(){return 2*n;}

int main()
{
  // const CTest objTest1;
  CTest objTest2;
  // cout<<objTest1.GetValue()<<","<<objTest2.GetValue()<<endl;
  cout<<objTest2.GetValue()<<endl;//non-const obj can call const-member funcs
  return 0;
}
