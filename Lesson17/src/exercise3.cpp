//Chapter 17 Exercise 2.
/*
write a program what holds the dimensions of packages and print them.
*/
// Michael J. P. Morse

/*
*/
#include <iostream>
#include <vector>
#include <algorithm>


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

void query_position(const vector<vector<double> >  &vec_input)
{
  int index = 0;
  cout << "what index do you want to query?" << endl;
  cin >> index;
  vector<double> v_at_location = vec_input.at(index);
  cout << endl;
  cout << "The dimensions of the package at " << index << " are ";
  cout << v_at_location.at(0)<< "x" ;
  cout << v_at_location.at(1) << "x" << v_at_location.at(2);
  cout << endl;

}


void add_value(vector< vector<double> >  &vec_input)
{
  vector<double> input_parameters;
  double input = 0;
  bool more_ints = 1;
  char user_choice = 'q';
  cout << "Please input length" << endl;
  cin >> input;
  input_parameters.push_back(input);
  cout << "Please input width" << endl;
  cin >> input;
  input_parameters.push_back(input);
  cout << "Please input height" << endl;
  cin >> input;
  input_parameters.push_back(input);
  vec_input.push_back(input_parameters);
}




int main(int argc, char const *argv[]) {
  // Length by width by height
  vector< vector<double> >  int_vector;
  vector<double> input_parameters;
  double input = 0;
  bool more_ints = 1;
  char user_choice = 'q';
  add_value(int_vector);


  while(more_ints)
  {
    cout << "would you like to add another package (a),query by package index (b)";
    cout << ", or quit (q)?" << endl;
    cin >> user_choice;
    switch (user_choice) {
      case 'a':
        add_value(int_vector);
        break;
      case 'b':
        query_position(int_vector);
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
