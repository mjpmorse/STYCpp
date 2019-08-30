// Chapter 11 Exercise 1 of Sams Teach yourself C++
// Code by Michael J. P. Morse 08/30/2019

#include <iostream>
#include <math.h>

class Shape{
public:
  // Define pure virtual functions for area and print
  virtual double area() = 0;
  virtual void print() = 0;

  // Base Class should also have a virtual destructor
  virtual ~Shape(){
  }
};

class Circle: public Shape{
//impliment the circle class
private:
  double& radius;
  const double pi = 3.1415;

public:
  Circle(double& _radius)
  :radius(_radius){
  }

  double area() {
    return pi*radius*radius;
  }

  void print(){

  }
};

class Triangle: public Shape{
  // impliment the triangle class
private:
  double& side1;
  double& side2;
  double& side3;

public:
  Triangle(double& _s1, double& _s2, double& _s3)
  :side1(_s1),side2(_s2),side3(_s3) {
  }

  double area(){
    //semi perimeter
    double sp = (side1 + side2 + side3)/2.;
    //Area based on Herin's formula
    double _area = sqrt(sp*(sp-side1)*(sp-side2)*(sp-side3));
    return _area;
  }
  void print(){

  }
};



int main(int argc, char const *argv[]) {
  double radius = 5;

  Circle myCircle(radius);
  Triangle myTriangle(radius,radius,radius);
  return 0;
}
