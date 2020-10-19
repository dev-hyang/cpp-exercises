#include<iostream>
using namespace std;

class Test{
public:
  Test(int n){cout<<"1"<<endl;}
  Test(int n, int m){cout<<"2"<<endl;}
  Test(){cout<<"0"<<endl;}
};

int main(int argc, char const *argv[]) {

  Test array1[3] = {1,Test(1,2)};
  Test array2[3] = {Test(1,2),Test(3,4)};
  Test* array3[3] = {new Test(1),new Test(3,4)};
  //delete[] array3;// this cast compile err, why?
  //I guess it might be the pointer array is just an array,
  //but array3[2] memory haven't been alloc yet
  delete array3[0];
  delete array3[1];
  return 0;
}
