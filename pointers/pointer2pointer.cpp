/**
	pointer to pointer in C / C++

*/
#include<iostream>
using namespace std;
int main(){
	int x = 5;
	int* p = &x;
	int** q = &p;
	int*** r = &q;

	printf("%d\n",*p);//dereferencing 
	printf("%d\n",*q);
	printf("%d\n",**q);
	printf("%d\n",*r);
	printf("%d\n",**r);
	printf("%d\n",***r);
}