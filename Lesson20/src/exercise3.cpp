//Chapter 20 Exercise 3.
/*
Demonstrate with a simple program that map cannot accept duplicate values by
multimap can
*/
// Michael J. P. Morse

/*

*/
#include <iostream>
#include <map>
#include <string>
using namespace std;

template <typename T>
void DisplayContacts (const T& input)
{
  for(auto i_element = input.cbegin()
      ; i_element != input.cend()
      ;  ++ i_element)
      {
        cout << i_element-> first << " , " << i_element->second << endl;
      }
      cout << endl;
}

struct ContactItem
{
  string str_contacts_name;
  string str_phone_number;
  string str_display_representation;

  // Constructor and destructor

  ContactItem(const string &str_name, const string &str_number)
  {
    str_contacts_name = str_name;
    str_phone_number = str_number;
    str_display_representation = (str_contacts_name +" : "+ str_phone_number);
  }

  //used by set::find
  bool operator == (const ContactItem &item_to_compare) const
  {
    return (this->str_contacts_name == item_to_compare.str_contacts_name);
  }

  //used by sort predicate

};


int main(int argc, char const *argv[]) {

  map<string,string> map_contacts;
  multimap<string,string> mmap_contacts;
  map_contacts.insert(make_pair("Jack Welsch", "+1 7889 879 879"));
  map_contacts.insert(make_pair("Bill Gates", "+1 97 7797 8799 8 "));
  map_contacts.insert(make_pair("Angela Merkel", "+49 23456 5466"));
  map_contacts.insert(make_pair("Vladimir Putin", "+7 6645 4564 797"));
  map_contacts.insert(make_pair("Manmohan Singh", "+91 234 4564 789"));
  map_contacts.insert(make_pair("Barack Obama", "+1 745 641 314"));
  //map_contacts.insert(make_pair("Barack Obama", "+1 745 642 314"));
  DisplayContacts(map_contacts);

  mmap_contacts.insert(make_pair("Jack Welsch", "+1 7889 879 879"));
  mmap_contacts.insert(make_pair("Bill Gates", "+1 97 7797 8799 8 "));
  mmap_contacts.insert(make_pair("Angela Merkel", "+49 23456 5466"));
  mmap_contacts.insert(make_pair("Vladimir Putin", "+7 6645 4564 797"));
  mmap_contacts.insert(make_pair("Manmohan Singh", "+91 234 4564 789"));
  mmap_contacts.insert(make_pair("Barack Obama", "+1 745 641 314"));
  mmap_contacts.insert(make_pair("Barack Obama", "+1 745 642 314"));
DisplayContacts(mmap_contacts);



  cout << endl << endl;






  return 0;
}
