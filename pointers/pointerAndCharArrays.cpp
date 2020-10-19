// stringtest.cpp
#include<iostream>
#include<string.h>
using namespace std;
void stringtest1(){
	char C[4];
	C[0] = 'J';
	C[1] = 'O';
	C[2] = 'H';
	C[3] = 'N';
	printf("%s\n", C);//JOHN0{I??
}

void stringtest2(){
	char C[5];
	C[0] = 'J';
	C[1] = 'O';
	C[2] = 'H';
	C[3] = 'N';
	C[4] = '\0';
	printf("%s\n", C);
}

void stringtest3(){
	char C[20];
	C[0] = 'J';
	C[1] = 'O';
	C[2] = 'H';
	C[3] = 'N';
	C[4] = '\0';
	int len = strlen(C);
	printf("Length = %d\n", len);
}

int main(){

	stringtest1();
	stringtest2();
	stringtest3();
}