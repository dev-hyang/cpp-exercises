//
#include<stdio.h>
void foo(void){
	int a = 41;
	a = a++;
	printf("%d\n",a);//rules of sequencing in C
}

int b(void){ puts("3");return 3;}
int c(void){ puts("4");return 4;}

int main(void){
	foo();
	int a = b() + c();
	printf("%d\n", a);
}