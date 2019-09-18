//Chapter 23 Exercise 2.
/*
Demonstrate how STL algorithms cuch as copy use iterators to do their
functions without needing to know the nature of the destination collections by
copying between two sewuences held in two dissimilar containers
*/
// Michael J. P. Morse

/*
Will copy a vector into a list
*/
#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;

template <typename T>
void DisplayContacts (const T& input)
{
  for(auto i_element = input.cbegin()
      ; i_element != input.cend()
      ;  ++ i_element)
      {
        cout << *i_element << endl;
      }
      cout << endl;
}


int main(int argc, char const *argv[]) {

  vector<string> vector1;

  vector1.push_back("my");
  vector1.push_back("name");
  vector1.push_back("is");
  vector1.push_back("Inigo");
  vector1.push_back("Montoya");
  vector1.push_back("you");
  vector1.push_back("killed");
  vector1.push_back("my");
  vector1.push_back("father");
  vector1.push_back("prepare");
  vector1.push_back("to");
  vector1.push_back("die");
  cout << "vector output: " <<endl;
  DisplayContacts(vector1);
  cout << endl;
  cout << "list output" <<endl;
//  sort(vector1.begin(),vector1.end());
  list<string> list1;
  list1.resize(vector1.size());
  copy(vector1.begin(),vector1.end(),list1.begin());
// IMPORTANT TO SORT A LIST SINCE IT IS AN ORDERED CONTAINER
  list1.sort();
//  sort(list1.begin(),list1.end());
  DisplayContacts(list1);









  return 0;
}
