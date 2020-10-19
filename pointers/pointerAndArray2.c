#include<stdio.h>
int sumOfElements(int A[], int size){
	int i, sum = 0;
	printf("size is = %d\n",size);
	for(i = 0; i < size; i++){
		sum += A[i];
	}
	return sum;
}
int sumOfElements2(int A[]){
	int i, sum = 0;
	int size = sizeof(A)/sizeof(A[0]);//"2"
	printf("size of A is %d, size of A[0] is: %d\n",sizeof(A),sizeof(A[0]));
	for(i = 0; i < size; i++){
		sum += A[i];
	}
	return sum;
}
int main(){
	int A[] = {1,2,3,4,5};
	int size = sizeof(A)/sizeof(A[0]);// "5"
	int a = 10;
	int* p = &a;
	printf("size of integer pointer p is: %d\n",sizeof(p));// "8"
	//size of integer pointer in MacOS is 8.
	char b = '2';
	char* q = &b;
	printf("size of char pointer q is: %d\n",sizeof(q));// "8"
	//size of char pointer in MacOS is 8.
	int total1 = sumOfElements(A,size);
	printf("Sum of elements = %d\n",total1);
	int total2 = sumOfElements2(A);
	printf("Sum of elements = %d\n",total2);
}