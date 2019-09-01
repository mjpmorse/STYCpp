//Chapter 12 Exercise 2.
/*
Program a move constructor and a move assignment operator for class
DynIntegers that encapsulates a dynamically allocated array in the form of
private member int*
*/
// Michael J. P. Morse


#include <iostream>
using std::cout;
using std::endl;

class DynIntegers{

private:
  int* p_int;

public:
  //constructor
  DynIntegers(int* input_int){

    if(input_int != NULL){
      p_int = input_int;
    }
    else {
      p_int = NULL;
    }
  }

  DynIntegers(DynIntegers&& move_source){
    if(move_source.p_int != NULL){
      p_int = move_source.p_int;
      move_source.p_int = NULL;
    }
  }

  DynIntegers& operator = (DynIntegers&& move_source){
    if((move_source.p_int != NULL) && (this != &move_source)){
      delete p_int;
      p_int = move_source.p_int;
      move_source.p_int = NULL;
    }
    return *this;
  }
};

int main(int argc, char const *argv[]) {
  /* code */
  int my_int = 7;
  DynIntegers my_DynInt(&my_int);
  DynIntegers copy_my_Dynint = my_DynInt;
  DynIntegers copy2_my_Dynint(my_DynInt);
  return 0;
}
