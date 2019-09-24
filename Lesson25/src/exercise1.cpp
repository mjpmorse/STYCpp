//Chapter 25 Exercise 1.
/*
Write a bitset class that contains four bits. Initialize it to a Number,
display the results and add it to another bitset object.
Catch: Bitset doesnt allow BitsetA + BitsetB
*/
// Michael J. P. Morse

/*

*/
#include <iostream>
#include <bitset>
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

class four_bits
{
private:
  bitset <4> my_bit_set;
  friend four_bits; //so that the + can access my_bit_set

public:
  four_bits(int base_10)
  {
    if(base_10<16)
    {
      bitset<4> temp (base_10);
      my_bit_set = temp;
    }
    else
    {
      cout << "your bit was too long,setting to 0";
      my_bit_set = 0;
    }
  }

  four_bits operator + (const four_bits &to_add)
  {
    four_bits to_return (0000);
    bool shift = 0;
    for(int i=0; i < 4; ++i)
    {
      // We first check to see if the bits are the both 1
      if(this->my_bit_set[i]  & to_add.my_bit_set[i])
      {
        // if we have already shifted
        if(shift)
        {
          to_return.my_bit_set.set(i,1);
        }
        //if both bits are one we shift the bit by one and return a zero
        else
        {
          to_return.my_bit_set.set(i,0);
        }
        shift = 1;
      }

      //check to see if they are exclusive or
      if(this->my_bit_set[i]  ^ to_add.my_bit_set[i])
      {
        if(shift)
        {
          to_return.my_bit_set.set(i,0);
          shift = 1;
        }
        else
        {
          to_return.my_bit_set.set(i,0);
          shift = 0;
        }
      }
      // takes care of case where we have two 0 but flig
      if((this->my_bit_set[i]  | to_add.my_bit_set[i]) == 0)
      {
        if(shift)
        {
          to_return.my_bit_set.set(i,1);
          shift = 0;
        }
        else
        {
          to_return.my_bit_set.set(i,0);
          shift = 0;
        }

      }
    }
    return to_return;
  }

  void print() const
  {
      cout << my_bit_set << endl;
  }

};


inline const char * const BoolToString(bool b)
{
  return b ? "true" : "false";
}


int main(int argc, char const *argv[]) {

  four_bits my5(5);
  four_bits my7(7) ;
  four_bits my_add(2);
  my_add = my5 + my7;
  my5.print();
  my7.print();
  my_add.print();






  return 0;
}
