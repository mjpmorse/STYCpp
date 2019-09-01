//Chapter 12 Exercise 1.
/*
Program a conversion operator for class Date that converts the data it holds
into a unique integer
*/
// Michael J. P. Morse
/*
Since we defined 30 days in a month, 12 months in a year, N years
My implementation will be to:
Day*10000 + month * 100 + year
example 11*100000 + 6*1000 + 1992 = 1100000 + 6000 + 1992 = 1161992
*/

#include <iostream>
using std::cout;
using std::endl;

class Date{
private:
  int day;
  int month;
  int year;

public:
  Date (int input_day, int input_month, int input_year)
  :day(input_day), month(input_month), year(input_year){}

  operator const unsigned int(){
    return day*1000000 + month*10000 + year;
  }


};

int main(int argc, char const *argv[]) {

  Date my_date(29,11,2019);
  unsigned int the_int = my_date;
  cout << the_int<<endl ;
  return 0;
}
