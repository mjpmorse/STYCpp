#include <iostream>
#include <bitset>
/* This exercise demonstrates the bit size of unsigned integers and
normal integers are the same and smaller then long integers
*/

int main(int argc, char const *argv[]) {
  using std::cout;
  using std::cin;
  using std::endl;

  bool userboolean1 = 0;
  bool userboolean2 = 0;

  cout << "Enter Boolean 1 value: ";
  cin  >> userboolean1;
  cout << endl;

  cout << "Enter Boolean 2 value: ";
  cin  >> userboolean2;
  cout << endl;

  cout << "Result of BitWise AND (&) on your booleans: "
  << (userboolean1 & userboolean2) << endl;

  cout << "Result of BitWise OR (|) on your booleans: "
  << (userboolean1 | userboolean2) << endl;

  cout << "Result of BitWise xOR (^) on your booleans: "
  << (userboolean1 ^ userboolean2) << endl;

  return 0;
}
