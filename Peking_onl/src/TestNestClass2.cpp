#include <iostream>
using namespace std;

//to test the scope of class and its members in definition
int x, y;
class List
{
public:
  int x;
  static int s;
public:
  int foo();
public:
  class Node
  {
    void f(int i)
    {
      //x = i;//err, cannot write to List::x without a List instance
      //int a = sizeof x;//c11 is ok
      s = i;//ok
      ::x = i;//ok global x
      y = i;//ok global y
    }
    void g(List* list, int i)
    {
      list->x = i;//ok
    }
    //inline void foo1(){i++;}//illegal no matther  i is private,protected or public bcz non-static
  };
};

int List::foo()
{
  return x++;
}

int main(int argc, char const *argv[]) {
  List list;
  cout<<list.foo()<<endl;
  return 0;
}
