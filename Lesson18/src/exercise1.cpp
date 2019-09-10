//Chapter 18 Exercise 1.
/*
Write a short program that accepts numbers from the user and inserts them into
the top of a list
*/
// Michael J. P. Morse

/*
Plan is to take an input string, make it uppercase,
copy it, reverse the copy, compare.
*/
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::list;

template <typename T>
void query_value(const T& vec_input)
{
  int index = 0;
  cout << "what index do you want to query?" << endl;
  cin >> index;
  cout << endl;
  cout << "The value stored at position " << index << " is ";
  auto i_element = vec_input.cbegin();
  advance(i_element,index-1);
  cout << *i_element << endl;
}

template <typename T>
void add_value(T& vec_input)
{
  int user_int = 0;
  cout << "Please enter the integer to add " << endl;
  cin >> user_int;
  vec_input.push_front(user_int);
}




int main(int argc, char const *argv[]) {
  list<int> int_vector;
  int input_int = 0;
  bool more_ints = 1;
  char user_choice = 'q';
  add_value(int_vector);

  while(more_ints)
  {
    cout << "would you like to add another integer (a),query (b), or quit(q)?";
    cin >> user_choice;
    switch (user_choice) {
      case 'a':
        add_value(int_vector);
        break;
      case 'b':
        query_value(int_vector);
        break;
      case 'q':
        more_ints = false;
        break;
      default:
       cout << "your input was not understood, please try again"<<endl;
    }
  }

  return 0;
}
