#include<iostream>
using namespace std;
int main(){
	int B[2][3]={{1,2,3},
					{4,5,6}
				};
	//int *p = B;//cannot initialize a variable of type 'int *' with an lvalue of type 'int [2][3]'
	//instead, we can define a pointer to 1-D array with 3 integers
	int (*p)[3];
	p = B;
	printf("%X\n", B);
	printf("%X\n", &B[0]);
	printf("%X\n", p);
	
	printf("%X\n", *B);
	printf("%X\n", B[0]);// a pointer to 1-D integer array <=> the address of first ele in array &B[0][0]
	printf("%X\n", *p);//// a pointer to 1-D integer array <=> the address of first ele in array &B[0][0]
	printf("%X\n", B + 1);
	printf("%X\n", p + 1);
	printf("%x\n",*(B+1));
	printf("%x\n",B[1]); //the name of 1-D array is a pointer to the first element of array.
	printf("%x\n",&B[1][0]);
	printf("%x\n",*(B+1)+2);
	printf("%x\n",B[1]+2);
	printf("%x\n",&B[1][2]);

}