//Chapter 14 Exercise 4.
/*
Write a simple template class that holds two arrays of types that are defined
via the class's template parameter list. The size of the array is 10, and the
template class should have accessor functions that allow for the manipulation
of array elements.
*/
// Michael J. P. Morse

#include <iostream>

template <typename a1, typename a2>
class HoldPairOfArrays
{
private:
  a1 array1[10];
  a2 array2[10];

public:
  //constructor that initializes member variables
  HoldPairOfArrays(a1& value_a1, a2& value_a2)
  {
    array1 = value_a1;
    array2 = value_a2;
  };

  //Accessor function to manipulate array elements
  a1& get_element_a1(int index){
    return array1[index]
  };
  a2& get_element_a2(int index){
    return array2[index]
  };
}




int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}
