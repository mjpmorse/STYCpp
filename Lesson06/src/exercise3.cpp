#include<iostream>

int main(int argc, char const *argv[]) {
  /* code */
  using std::cout;
  using std::cin;
  using std::endl;

  int NumsToCal = 0;
  int Num1 = 0;
  int Num2 = 1;
  char WantMore = 'y';
    cout << "How many Fibbi numbers you want? ";
    cin  >> NumsToCal;
    // Check that the number is a natural number
    if (NumsToCal < 1){
      cout << "Bro come on" << endl;;
      return 0;
    }
    cout << Num1 << "  " << Num2 << "  ";
    for(int Index = 0; Index < NumsToCal-2; ++Index ){
      cout << Num1 + Num2 << "  " ;
      int Num2Tmp = Num2;
      Num2 = Num1 + Num2;
      Num1 = Num2Tmp;
    }

  return 0;
}
