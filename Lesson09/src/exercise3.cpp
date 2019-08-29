//Exercise 9.3
#include <iostream>

class Human
{
private:
  int Age;
  string Name;
public:
  Human(string InputString="Steve", int inputAge="-2")
  :Name(InputString),Age(inputAge){}
}
