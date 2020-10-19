//A classic use case of function pointer/callback
//using qsort() method to do QuickSort
#include<iostream>
using namespace std;

//this is the basic comparison mechanism in qsort
int compare(const void* a, const void* b){
  int a_ = *((int*)a);
  int b_ = *((int*)b);
  return a_ - b_;
}

int main(int argc, char const *argv[]) {

  int A[] = {3,2,1,5,6,4};
  qsort(A,6,sizeof(int),compare);
  for (size_t i = 0; i < 6; i++) {
    /* code */
    cout << A[i] << '\n';
  }
  return 0;
}
