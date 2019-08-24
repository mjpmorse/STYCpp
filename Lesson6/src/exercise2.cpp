#include<iostream>

int main(int argc, char const *argv[]) {
  /* code */
  using std::cout;
  using std::cin;
  using std::endl;

  const int ARRAY1_LEN = 3;
  const int ARRAY2_LEN = 2;

  int myInts1[ARRAY1_LEN] = {35,-3,0};
  int myInts2[ARRAY2_LEN] = {20,-1};

  cout << "add each element in myInts1 by each in myInts2, in reverse order";
  cout << endl;

  for(int array1Index = ARRAY1_LEN-1; array1Index > -1; --array1Index){
    for (int array2Index = ARRAY2_LEN-1; array2Index > -1; --array2Index) {
      cout << myInts1[array1Index] << "+" << myInts2[array2Index];
      cout << " = " << myInts1[array1Index] + myInts2[array2Index] << endl;
    }
  }
  return 0;
}
