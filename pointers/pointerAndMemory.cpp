#include<iostream>
using namespace std;

int main(){
	int a; //goes on stack
	//to store it on heap, we need to reserve/alloc some space on heap
	// malloc method is used
	// malloc() to ask how much memory to alloc on heap in bytes based on the parm
	// malloc() will return a void pointer to starting address of the alloc block of memory
	
	int *p; 
	/* added by dahang @ 2-Nov-18 11:50 am
	C-style code*/
	p = (int*)malloc(sizeof(int));//(int*) typecasting the void pointer to integer pointer

	*p = 10;

	free(p);//pass the pointer as parameters in free to clear the memory which is not needed

	//another allocation
	p = (int*)malloc(sizeof(int));

	*p = 20;

	free(p);
	//ask memory on heap for an integer array
	p = (int*)malloc(20*sizeo(int));
	/* C-style code*/

	/*C++ style method to alloc and dealloc*/
	p = new int;
	*p = 10;
	delete p;
	p = new int[20];
	delete[] p;
}