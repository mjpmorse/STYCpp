#include <iostream>
/* This exercise demonstrates the bit size of unsigned integers and
normal integers are the same and smaller then long integers
*/

int main(int argc, char const *argv[]) {
  using std::cout;
  using std::cin;
  using std::endl;

  const double pi = 3.14;
  double radius = 0;
  cout << "Please input the radius";
  cin >> radius;
  cout << endl;

  int circumference = 2*pi*radius;
  int area = pi*radius*radius;

  cout << "The circumference of the circle is: " << circumference
  << endl;

  cout << "The area of the circle is: " << area
  << endl;

  return 0;
}
