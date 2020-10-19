#include "Point.h"
#include<iostream>
using namespace std;
//definition of Point class static data members
int Point::tally_ = 0;
int Point::NumberOfPoints(){
  return tally_;
}
//default constructor
Point::Point(){
  tally_++;
  cout<<"default constructor called"<<endl;
}
//copy constructor
Point::Point(const Point& pr){
  x_= pr.x_;
  y_= pr.y_;
  tally_++;
  cout<<"copy constructor called"<<endl;
}

Point::Point(double x, double y):x_(x),y_(y)
{
  //
  tally_++;
  cout<<"convenient constructor called"<<endl;
}

Point::~Point()
{
  tally_--;
  cout<<"destructor called"<<endl;
}
