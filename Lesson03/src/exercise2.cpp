#include <iostream>
/* This exercise demonstrates the bit size of unsigned integers and
normal integers are the same and smaller then long integers
*/

int main(int argc, char const *argv[]) {
  using std::cout; 
  using std::endl;

  cout << "Computing the size of comne c++ variable types" << endl;

  cout << "size of unsigned integers are: " << sizeof(unsigned int)
  << endl;

  cout << "size of signed integers are: " << sizeof(int)
  << endl;

  cout << "size of long integers are: " << sizeof(long int)
  << endl;




  return 0;
}
