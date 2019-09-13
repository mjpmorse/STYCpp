//Chapter 19 Exercise 3.
/*
Demonstrate via a simple program that a set cannot accep tduplicate entries
but a multiset can
*/
// Michael J. P. Morse

/*
Will use exercise 2's dictonary and make it a set and multiset
*/
#include <iostream>
#include <set>
#include <string>
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

struct Dictionary
{
  string str_word;
  string str_meaning;
  string str_display_representation;

  // Constructor and destructor

  Dictionary(const string &input_word, const string &input_meaning)
  {
    str_word = input_word;
    str_meaning = input_meaning;
    str_display_representation = (str_word +": "+ str_meaning);
  }

  //used by set::find
  bool operator == (const Dictionary &item_to_compare) const
  {
    return (this->str_word == item_to_compare.str_word);
  }

  //used by sort predicate

  bool operator < (const Dictionary & item_to_compare) const
  {
    return(this->str_word<item_to_compare.str_word);
  }

  //Used in DisplayContent via count
  operator const char*() const
  {
    return str_display_representation.c_str();
  }

};



int main(int argc, char const *argv[]) {

  multiset <Dictionary> multiset_dictionary;
  multiset_dictionary.insert(Dictionary("Ardvark","An animal"));
  multiset_dictionary.insert(Dictionary("Pen","on my desk"));
  multiset_dictionary.insert(Dictionary("water bottle","holds water"));
  multiset_dictionary.insert(Dictionary("Pen","writes stuff"));
  DisplayContacts(multiset_dictionary);


  cout << endl << endl;

  set <Dictionary> set_dictionary;
  set_dictionary.insert(Dictionary("Ardvark","An animal"));
  set_dictionary.insert(Dictionary("Pen","on my desk"));
  set_dictionary.insert(Dictionary("water bottle","holds water"));
  set_dictionary.insert(Dictionary("Pen","writes stuff"));
  DisplayContacts(set_dictionary);




  return 0;
}
