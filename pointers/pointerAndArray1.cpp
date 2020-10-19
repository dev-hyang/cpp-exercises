#include<iostream>
int main(){
	int A[] = {2,4,5,9};

	for (int i = 0; i < 4; i++){
		printf("Address = %X\n",&A[i]);
		printf("Address = %X\n",A + i);
		printf("Address = %d\n",A[i]);
		printf("Address = %d\n",*(A+i));
	}

	int* p = A;
	//A = p;//pointerAndArray1.cpp:13:4: error: array type 'int [4]' is not assignable
	p++;
	//A++;//cannot increment value of type 'int [4]'
}