// stringtest1.cpp
#include<iostream>
#include<string.h>
int main(){
	char C[4] = "JOHN";
	printf("Size in bytes = %d\n", sizeof(C));
	int len = strlen(C);
	printf("Length = %d\n", len);
}