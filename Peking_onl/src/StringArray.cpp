#include<string>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int size = 3;
  string* strPtr = new string[size];
  string* strPtr2 = new string[size];
  cout<<","<<strPtr->size()<<","<<endl;//0, pointer has no size
  cout<<","<<sizeof(string)<<","<<endl;//8
  cout<<","<<sizeof(strPtr)<<","<<endl;//24
  cout<<","<<strPtr<<","<<endl;
  cout<<","<<strPtr+1<<","<<endl;
  cout<<","<<strPtr+2<<","<<endl;
  cout<<","<<(*strPtr)<<","<<endl;
  for(int i = 0; i< size; i++){
    strPtr2[i] = strPtr[i];
  }
  cout<<","<<strPtr2<<","<<endl;
  cout<<","<<strPtr2+1<<","<<endl;
  cout<<","<<strPtr2+2<<","<<endl;
  delete[] strPtr;
  delete[] strPtr2;

  return 0;
}
