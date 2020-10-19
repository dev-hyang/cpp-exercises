#include<iostream>
#include<string.h>
using namespace std;
void print(char *C){
	C[0] = 'A';
	while (*C != '\0'){
		printf("%c",*C);
		C++;
	}
	printf("\n");
}

void print(const char *C){
	// C[0] = 'A';//this will cause compile-time error
	while (*C != '\0'){
		printf("%c",*C);
		C++;
	}
	printf("\n");
}

int main(){
	// char *C = "hello";//this means hello is stored as constant, cannot be modified.
	//char C[2] = "hello";//stringtest2.cpp:14:14: error: initializer-string for char array is too long
	char C[20] = "hello";//this works out
	// C[0] = 'A';

	print(C);
	// String* x = "hello";//In C/C++, no String type
	// printf("%s\n", x);//
}
