//Chapter 16 Exercise 2.
/*
Write a program to verify to tell user the number of vowels in a string
*/
// Michael J. P. Morse

/*
Plan is to take an input string, iterate through vowels and count
*/
#include <iostream>
#include <string>
#include <algorithm>

int number_of_vowels(std::string &string_to_check)
{
  using std::string;

  string string_to_check_copy(string_to_check);
  transform(string_to_check_copy.begin(),string_to_check_copy.end(),
    string_to_check_copy.begin(),tolower);

  string vowel_string = "aeiou";
  int vowel_count = 0;

  // I will use pointers to point to the elements in the two strings
  auto i_char_string = string_to_check_copy.begin();
  int which_vowel = 0;
  // loop over positions in the string to check
  while(i_char_string != string_to_check_copy.end())
  {
    which_vowel = vowel_string.find(*i_char_string,0);
    if(which_vowel != string::npos)
    {
      ++ vowel_count;
    }

    ++ i_char_string;
  }
  return vowel_count;
}


bool is_palindrome(std::string &string_to_check)
{
  using std::string;
  string string_to_check_copy(string_to_check);
  transform(string_to_check_copy.begin(),string_to_check_copy.end(),
    string_to_check_copy.begin(),tolower);
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

  cout << "What would you like count vowels on" << endl;
  string input_string;
  getline(cin,input_string);
  cout << endl;

  int vowels = number_of_vowels(input_string);
  cout << input_string << "has " << vowels << " vowels" << endl;



  return 0;
}
