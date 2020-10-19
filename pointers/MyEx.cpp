#include<iostream>
using namespace std;

void foo(int a, int b){
	int temp;
	cout <<"Bef: &a:"<<&a<<";&b:"<<&b<<endl;
	temp = a;
	a = b;
	b = temp;
	cout<< "a:"<<a <<" , b:"<<b<<endl;
	cout <<"Aft: &a:"<<&a<<";&b:"<<&b<<endl;

}

int main(){
	int x = 1;
	int y = 2;
	cout<< "x:"<<x <<" , y:"<<y<<endl;
	cout <<"&x:"<<&x<<";&y:"<<&y<<endl;
	foo(x,y);
	cout<< "x:"<<x <<" , y:"<<y<<endl;
	cout <<"&x:"<<&x<<";&y:"<<&y<<endl;

}
