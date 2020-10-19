//goal to sorting a integer array
#include<iostream>
using namespace std;
void res(int* A){
  //A is an array

  //return type is an integer array
}

void compInt(int (*ptr)(int* A),int* arr){
  ptr(arr);
}

//bublesorting
void bublesort(int *arr, int n){
  int temp;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n-1; j++){
      if(arr[j] > arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  // for(int i = 0; i< n; i++){
  //   for(int j = i+1; j < n; j++){
  //     if (arr[i] > arr[j]){
  //       temp = arr[i];
  //       arr[i] = arr[j];
  //       arr[j] = temp;
  //     }
  //   }
  // }
}
int main()
{
  int A[] = {3,2,1,5,6,4};
  bublesort(A,6);
  for(int i = 0; i<6;i++){printf("%d ", A[i]);}
  // compInt(res,A);
}
