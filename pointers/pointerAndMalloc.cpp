#include<iostream>
using namespace std;
int main(){
	int n;
	printf("Enter size of array \n");
	scanf("%d",&n);
	int *A = (int*)malloc(n*sizeof(int));

	// for(int i = 0; i < n; i++){
	// 	A[i] = i + 1;
	// }
	free(A);
	// A[2] = 6;//in some other machine, this might cause prog to crash.
	A = NULL;//recommended
	for(int i = 0; i< n; i++){
		printf("%d ", A[i]);
	}

	printf("\n");
	int *B = (int*)calloc(n,sizeof(int));
	for(int i = 0; i< n; i++){
		printf("%d ", B[i]);
	}
	printf("\n");

	int *C = (int*)realloc(B,(2*n)*sizeof(int));
	printf("Prev block address = %x,new address=%x\n", B,C);
	for(int i = 0; i< n; i++){
		printf("%d ", C[i]);
	}
	printf("\n");

	C = (int*)realloc(NULL,(2*n)*sizeof(int));//malloc
	// printf("Prev block address = %x,new address=%x\n", B,C);
	int *C2 = (int*)realloc(C,0);//free


	free(B);

	A = NULL;
	B = NULL;
	C = NULL;

	// printf("%d\n", A[0]);//null pointer now
}
