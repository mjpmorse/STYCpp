//Chapter 16 Exercise 4.
/*
Your program should have 4 strings "I", "Love","STL","STrings".
Appends them and display the result*/
// Michael J. P. Morse

/*
Plan is to take an input string, iterate through vowels and count
*/
#include <iostream>
#include <string>
#include <algorithm>

std::string alternate_lower_upper(std::string input_string){
  using std::string;
  using std::transform;
  for(int i =0; i < input_string.length(); i +=2)
  {
    // Skip a space, does not currently work
    // std::out << std::strncmp(input_string[i]," ",==);
    // if(&input_string[i] == " ")
    // {
    //    i -=1;
    //    std::cout <<"space" <<std::endl;
    // }
//    else
//    {
      input_string[i]=toupper(input_string[i]);
//    }
  }
  return input_string;
}

int number_of_vowels(std::string &string_to_check)
{
  using std::string;
  using std::transform;
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
  using std::transform;
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

  string string1 = "I";
  string string2 = "Love";
  string string3 = "STD";
  string string4 = "Strings";
  string space   = " ";

  string1.append(space).append(string2).append(space).append(
    string3).append(space).append(string4)
  ;
  cout<<string1<<endl;

//  int vowels = number_of_vowels(input_string);
//  cout << input_string << "has " << vowels << " vowels" << endl;



  return 0;
}
