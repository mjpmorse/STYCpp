//Chapter 18 Exercise 3.
/*
Write a short program that reverses and sorts a list of strings
*/
// Michael J. P. Morse

/*
Plan is to take an input string, make it uppercase,
copy it, reverse the copy, compare.
*/
#include <iostream>
#include <list>
#include <vector>
#include <string>
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

template <typename T>
void display_content(const T& input)
{
  for(auto i_element = input.cbegin(); i_element != input.cend(); ++ i_element)
  {
    cout << *i_element << " ";
  }
  cout << endl;
}




int main(int argc, char const *argv[]) {
  list<string> string_list;
  vector<int> int_vector;
  int input_int = 0;
  bool more_ints = 1;
  char user_choice = 'q';
  //add_value(int_vector);

  string_list.push_back("a");
  string_list.push_back("list");
  string_list.push_back("of");
  string_list.push_back("strings");
  string_list.push_back("not");
  string_list.push_back("reversed");

  display_content(string_list);
  string_list.sort();
  display_content(string_list);
  string_list.reverse();
  display_content(string_list);





  return 0;
}
