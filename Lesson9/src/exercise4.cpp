//Exercise 9.4
#include <iostream>

class Circle
{
private:
  const double pi = 3.14;
  const double& Radius;
public:
  //constructor which takes the radius
  Circle(const double& radius)
  :Radius(radius){}

  //method to calculate area
  double area()
  {
    return pi*Radius*Radius;
  }
  //method to calculate circumference
  double circumference(){
    return 2*pi*Radius;
  }


};

int main(int argc, char const *argv[]) {

  double r = 5;
  Circle c1(r);
  std::cout << c1.area() << std::endl;
  std::cout << c1.circumference() << std::endl;
  return 0;
}
