#ifndef Point_H
#define Point_H
class Point{
public:
  static int NumberOfPoints();
protected:
  static int tally_;
private:
  double x_ = 0.0f;//use c++11 initializer
  double y_ = 0.0f;//use c++11 initializer
  //Point& origin;
public:
  //because there is reference data member in defition, we
  //would better define copy constructor by ouselves
  Point();
  Point(const Point& pr);
  // Point(double x, double y):x_(x),y_(y);
  // Point(double x, double y);
  Point(double, double);
  ~Point();
};
#endif
