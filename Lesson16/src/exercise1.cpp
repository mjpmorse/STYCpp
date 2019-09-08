//Chapter 16 Exercise 1.
/*
Write a program to verify whether the word input is a palindrome.
*/
// Michael J. P. Morse

/*
Plan is to take an input string, make it uppercase,
copy it, reverse the copy, compare.
*/
#include <iostream>
#include <string>
#include <algorithm>

bool is_palindrome(std::string &string_to_check)
{
  using std::string;
  string string_to_check_copy(string_to_check);
  string string_to_check_reverse(string_to_check_copy);
  if(string_to_check_copy==string_to_check_reverse)
  {
    return true;
  }
  else
  {
    return false;
  }
}



int main(int argc, char const *argv[]) {
  using std::cout;
  using std::cin;
  using std::endl;
  using std::string;

  cout << "What would you like to check for palindrome?" << endl;
  string input_string;
  getline(cin,input_string);
  cout << endl;

  if(is_palindrome(input_string))
  {
    cout <<input_string << " is a palindrome" <<endl;
  }
  else
  {
    cout << input_string << " is not a palondrome" << endl;
  }
  return 0;
}
