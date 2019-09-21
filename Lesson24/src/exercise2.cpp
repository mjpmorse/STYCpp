//Chapter 24 Exercise 2.
/*
write a program that reverses a users string input using the stack class
*/
// Michael J. P. Morse

/*
take in the string, one by one put the chars into a stack of char then
construct a string from the outputs of the stack
*/
#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;



int main(int argc, char const *argv[]) {

stack <char> string_reversal;

string to_be_reversed = "a simple string to be reversed";
string reversed_string = "";

for (size_t n_char = 0;
      n_char < to_be_reversed.length();
    ++n_char)
{
  string_reversal.push(to_be_reversed[n_char]);
}
//pop it now
while(string_reversal.size() != 0)
{
  reversed_string += string_reversal.top();
  string_reversal.pop();
}
cout << to_be_reversed <<endl;
cout << reversed_string <<endl;



}
