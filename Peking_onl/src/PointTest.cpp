#include<iostream>
#include"Point.h"
using namespace std;

int main(int argc, char const *argv[]) {
  cout<<"main() starting:"<<Point::NumberOfPoints()<<endl;
  Point p1;//print "default constructor called"
  Point p2(p1);//print "copy constructor called"
  cout<<"main() middle"<<Point::NumberOfPoints()<<endl;//print 2
  {
    // Point p3;//print "default constructor called"
    Point p4(p2);//print "copy constructor called"
  }
  cout<<"main() ending"<<Point::NumberOfPoints()<<endl;//print 2
  return 0;
}
