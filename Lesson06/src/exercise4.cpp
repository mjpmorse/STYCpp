#include<iostream>

int main(int argc, char const *argv[]) {
  /* code */
  using std::cout;
  using std::cin;
  using std::endl;

  enum RainbowColors {Red = 0,
    Orange,
    Yellow,
    Green,
    Blue,
    Indigo,
    Violet
    };

    RainbowColors myColor = Orange;
//    cout << "What is your Color?: ";
//    cin >>  myColor;
//    This cin does not work
    switch (myColor) {
      case Red:    {cout << "Your color is in the rainbow"; break;}
      case Orange: {cout << "Your color is in the rainbow"; break;}
      case Yellow: {cout << "Your color is in the rainbow"; break;}
      case Green:  {cout << "Your color is in the rainbow"; break;}
      case Blue:   {cout << "Your color is in the rainbow"; break;}
      case Indigo: {cout << "Your color is in the rainbow"; break;}
      case Violet: {cout << "Your color is in the rainbow"; break;}
      default: {cout << "Your color is not in the rainbow"; break;}
    }

  return 0;
}
