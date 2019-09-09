//Chapter 17 Exercise 2.
/*
Extend on the exercise 1 in order to tell the user wether the value he query
for exist in the vector/
*/
// Michael J. P. Morse

/*
Plan is to take an input string, make it uppercase,
copy it, reverse the copy, compare.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

void query_position(const vector<int> &vec_input)
{
  int index = 0;
  cout << "what index do you want to query?" << endl;
  cin >> index;
  cout << endl;
  cout << "The value stored at position " << index << " is ";
  cout << vec_input.at(index) << endl;
}

void query_value(const vector<int> &vec_input)
{
  int input_int = 0;
  bool found = false;
  cout << "what integer value do you want to querry for?" << endl;
  cin >> input_int;
  cout << endl;
  auto i_int_finder = find(vec_input.cbegin(),vec_input.cend(),input_int);
  while(i_int_finder!= vec_input.cend())
  {
    found = true;
    size_t offset = distance(vec_input.cbegin(),i_int_finder);
    cout << "The value was found at position: " << offset <<endl;
    i_int_finder = find(++i_int_finder,vec_input.cend(),input_int);
  }
  if(!found)
  {
    cout << "your integer was not found"<<endl;
  }
}

void add_value(vector<int> &vec_input)
{
  int user_int = 0;
  cout << "Please enter the integer to add " << endl;
  cin >> user_int;
  vec_input.push_back(user_int);
}




int main(int argc, char const *argv[]) {
  vector<int> int_vector;
  int input_int = 0;
  bool more_ints = 1;
  char user_choice = 'q';
  cout << "Please input first int element to vector" << endl;
  cin >> input_int;
  int_vector.push_back(input_int);

  while(more_ints)
  {
    cout << "would you like to add another integer (a),query by index (b)";
    cout << " querry by value (c), or quit (q)?" << endl;
    cin >> user_choice;
    switch (user_choice) {
      case 'a':
        add_value(int_vector);
        break;
      case 'b':
        query_position(int_vector);
        break;
      case 'c':
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
