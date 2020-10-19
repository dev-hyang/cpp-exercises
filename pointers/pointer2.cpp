#include<iostream>
using namespace std;
int main(){
	int a = 1025;
	int *p = &a;
	printf("size of integer is %d bytes\n",sizeof(int));
	printf("address = %d, value=%d\n",p,*p);
	printf("address = %d, value=%d\n",p+1,*(p+1));

	char *p0;
	p0 = (char*)p;//typecasting
	printf("size of integer is %d bytes\n",sizeof(char));
	printf("address = %d, value=%d\n",p0,*p0);
	printf("address = %d, value=%d\n",p0+1,*(p0+1));

	//void pointer - generic pointer
	void *p1;
	p1 = p;//this is valid, no compiling error
	//but using void pointer can only get address, cannot do dereferencing
	printf("address = %d\n",p1);
	//printf("value = %d\n",*p1);//this is invalid,
	//cannot pass expression of type 'void' to variadic function; expected
    //type from format string was 'int'
    //printf("value = %d\n",p1+1);//arithmetic is also invalid,

}