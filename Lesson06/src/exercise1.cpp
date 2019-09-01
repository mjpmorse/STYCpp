#include <iostream>

int main(int argc, char const *argv[]) {
  /* code */
  using std::cout;
  using std::cin;
  using std::endl;

  int myArray[5] = {0,1,2,3,4};
  int arraySize = sizeof(myArray)/sizeof(myArray[0]);
  // cout << "Your array is: " << arraySize << endl;


  for (int i = arraySize; i > 0; --i) {
    /* code */
    cout << "The " << i-1 <<"th element of the array is: " << myArray[i-1];
    cout << endl;
  }
  return 0;
}
