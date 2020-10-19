//goal to sorting a integer array either in asc or desc order
#include<iostream>
using namespace std;

int compare(int a, int b){
  // return a-b;//asc
  // return b-a;//desc
  return abs(a)-abs(b);//absolute asc
}

//bublesorting
void bublesort(int *arr, int n, int (*ptr)(int,int)){
  int temp;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n-1; j++){
      // if(arr[j] > arr[j+1]){//compare arr[j] with arr[j+1] and swap if needed
      if(compare(arr[j],arr[j+1])>0){
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
  bublesort(A,6,compare);
  for(int i = 0; i<6;i++){printf("%d ", A[i]);}
  // compInt(res,A);
}
