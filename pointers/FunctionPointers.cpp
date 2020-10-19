#include<iostream>
using namespace std;

void PrintHello(char *name){
  printf("hello %s\n", name);
}

void PrintHello(){
  printf("hello\n");
}

int Add(int a, int b){
  return a + b;
}

int main(){
  int c ;
  int (*p)(int,int);
  p = &Add;
  c = (*p)(2,3);//de-reference and exec the function
  printf("%d\n", c);

  void (*ptr_1)();
  ptr_1 = PrintHello;
  ptr_1();

  // void (*ptr_2)(char*,char*);//compile-time error, cannot find a matchable function type
  void (*ptr_2)(char*);
  ptr_2 = PrintHello;
  ptr_2("Tom");

}
