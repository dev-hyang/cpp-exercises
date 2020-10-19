#include"C1.h"
#include<iostream>
void C1::foobar(char* y)
{
  char* z;
  z = y;
  C1::y = 150;
  z = z + 10* ::y;
}

int main(int argc, char const *argv[]) {
  /* code */
  C1 c1;
  std::cout<<::y<<std::endl;//print 0
  return 0;
}
