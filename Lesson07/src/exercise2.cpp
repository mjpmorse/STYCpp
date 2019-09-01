#include<iostream>


void ArrayReader(double Array[], int length);

int main(int argc, char const *argv[]) {
  /* code */
  using std::cout;
  using std::cin;
  using std::endl;

  double MyNumbers[5] = {0,1,2,3,4};
  int Length = sizeof(MyNumbers)/sizeof(MyNumbers[0]);
  ArrayReader(MyNumbers,Length);

  return 0;
}

void ArrayReader(double Array[], int length){
  using std::cout;
  using std::cin;
  using std::endl;
  for(int i =0; i< length;++i){
    cout << Array[i];
  }
  cout <<endl;
}
