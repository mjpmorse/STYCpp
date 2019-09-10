//Chapter 18 Exercise 3.
/*
Write a short program that inserts the contents of a vector into a list using
list's insert function
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
  list<int> int_list;
  vector<int> int_vector;
  int input_int = 0;
  bool more_ints = 1;
  char user_choice = 'q';
  //add_value(int_vector);

  int_vector.push_back(5);
  int_vector.push_back(5);
  int_vector.push_back(5);
  int_vector.push_back(5);

  int_list.push_back(7);
  int_list.push_back(7);
  int_list.push_back(7);
  int_list.push_back(7);
  auto i_point = int_list.cbegin();
  advance(i_point,2);

  int_list.insert(i_point,int_vector.cbegin(),int_vector.cend());

  display_content(int_list);





  return 0;
}
