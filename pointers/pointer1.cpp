#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a;//default value is 0.
	int *p;
	p = &a;
	cout<<hex<<p<<endl;//output "0x7ffee0907ae8"
	cout<<*p<<endl;//"0"
	printf("2, %X\n", p);//output "E0907AE8"
	printf("2, %d\n", *p);// "0"
	return -1;
}