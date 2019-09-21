//Chapter 24 Exercise 1.
/*
write a binary predicate for the persons class to sort first by old then
be female
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
#include <queue>
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


inline const char * const BoolToString(bool b)
{
  return b ? "true" : "false";
}

class Person
{
private:
  string str_rep;
public:
  int age;
  bool is_female;


  Person(const int &input_age, const bool &input_gender)
  {
    age = input_age;
    is_female = input_gender;
    str_rep = to_string(age) + " " + BoolToString(is_female);
  }

  bool operator < (const Person &person_1) const
  {
//    return (this-> age < person_1.age);


    // first sort by age if
    bool b_return = false;
    if(this-> age < person_1.age)
    {
      // then sort by gender, how does this deal with same age asme gender
      b_return =  true;
    }
    else if(this->is_female && person_1.is_female)
    {
      b_return =  true;
    }
    return b_return;
  }

  // used for cout
  operator const char*() const
  {
    return str_rep.c_str();
  }
};


int main(int argc, char const *argv[]) {

  priority_queue <Person> pq_people;

  pq_people.push(Person(30,0));
  pq_people.push(Person(45,1));
  pq_people.push(Person(45,1));
  pq_people.push(Person(50,1));
  pq_people.push(Person(45,0));
  pq_people.push(Person(50,0));
  pq_people.push(Person(99,1));

  while (pq_people.size() != 0)
  {
    cout << "Top Element was: " << pq_people.top() <<endl;
    pq_people.pop();
  }


  return 0;
}
