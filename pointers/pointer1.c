#include<stdio.h>
int main(){
	int a;
	int *p;
	a = 10;
	p = &a;
	printf("2, %d\n", p);//each time anser is diff
	printf("2, %d\n", p+1);//pointer arithmetic
	printf("2, %d\n", *p);//10, if not init, a garbage value
	printf("2, %d\n", &a);
	//free( *p);//dangling poniter, free a pointer without alloc
	return -1;
}