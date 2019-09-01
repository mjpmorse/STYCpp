#include <iostream>
using namespace std;

/*
I am curious why we initalize pCopy in both line 15 and line 17.
Will therefore check and see what happens with removing one of the initalizers.
*/

int main(){
  cout << "how many ints? ";
  int InputNums = 0;
  cin >> InputNums;

  int* pNumbers = new int[InputNums];
  int* pCopy = pNumbers;

  for(int Index = 0; Index < InputNums; ++Index){
    cin >> *(pNumbers + Index);
  }

  for(int Index = 0; Index < InputNums; ++Index){
    cout << *(pCopy++) << " ";
  }

  delete[] pNumbers;
  return 0;
}
