//pointer as function return
#include<iostream>
using namespace std;

void PrintHelloWorld(){
  printf("HelloWorld\n");
}

int Add(int a, int b){
  int c = a +b;
  return c;
}

int *Add(int* a, int* b){
  int c = (*a) + (*b);
  return &c;//this will return an To-Be deallocated stack address to its calling func
            //it's dangerous thing to do
}

int main(){
  int x = 2, y = 4;
  int z = Add(x,y);
  int* ptr = Add(&x, &y);
  printf("Sum = %d\n", *ptr);//lucky bcz we didn't override previous called stack
  // cout<<"Sum = "<<(*ptr)<<endl;
  PrintHelloWorld();//if we call another function
  printf("Sum = %d\n", *ptr);//unlucky bcz previous called stack is overriden
  // cout<<"Sum = "<<(*ptr)<<endl;
}
