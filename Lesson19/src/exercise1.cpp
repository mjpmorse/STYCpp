//Chapter 19 Exercise 1.
/*
Extend the telephone directory examole in this lesson to find a person's
name given a phone number, wouth changin gthe structure of ContactItem
*/
// Michael J. P. Morse

/*
Plan is to take an input string, make it uppercase,
copy it, reverse the copy, compare.
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
    str_display_representation = (str_contacts_name +": "+ str_phone_number);
  }

  //used by set::find
  bool operator == (const ContactItem &item_to_compare) const
  {
    return (this->str_contacts_name == item_to_compare.str_contacts_name);
  }

  //used by sort predicate

  bool operator < (const ContactItem & item_to_compare) const
  {
    return(this->str_contacts_name<item_to_compare.str_contacts_name);
  }

  //Used in DisplayContent via count
  operator const char*() const
  {
    return str_display_representation.c_str();
  }

};

struct sort_by_number
{
  bool operator()(const ContactItem &lhs, const ContactItem &rhs) const
  {
    return(lhs.str_phone_number > rhs.str_phone_number);
  }

};

int main(int argc, char const *argv[]) {

  set<ContactItem,sort_by_number > set_contacts;
  set_contacts.insert(ContactItem("Jack Welsch", "+1 7889 879 879"));
  set_contacts.insert(ContactItem("Bill Gates", "+1 97 7797 8799 8 "));
  set_contacts.insert(ContactItem("Angela Merkel", "+49 23456 5466"));
  set_contacts.insert(ContactItem("Vladimir Putin", "+7 6645 4564 797"));
  set_contacts.insert(ContactItem("Manmohan Singh", "+91 234 4564 789"));
  set_contacts.insert(ContactItem("Barack Obama", "+1 745 641 314"));
  DisplayContacts(set_contacts);


  cout << endl << endl;

  




  return 0;
}
