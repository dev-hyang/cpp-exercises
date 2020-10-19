#include<iostream>
using namespace std;

void FuncA(int *A){
	printf("%X\n", A);
}

void FuncB(int (*B)[3]){
	printf("%X\n", B);
}

void FuncC(int (*C)[2][2]){//argus for multi-dimensions, 
	printf("%X\n", C);
}

void FuncC1(int ***C){//argus for multi-dimensions, 
	printf("%X\n", C);
}

int main(){
	
	int A[2]={1,2}; //A will return int*

	int B[2][3]={{2,4,5},{5,7,8}};//B will return int (*)[3]

	int C[3][2][2] = {
		{{2,5},{7,9}},
		{{3,4},{6,1}},
		{{0,8},{11,13}}
	};//C will return int (*)[2][2]
	FuncA(A);
	FuncB(B);
	FuncC(C);
	FuncC1(C);
	printf("%X %X %X %X\n", C, *C, C[0], &C[0][0]);
	printf("%d\n", *(C[0][0]+1));
}