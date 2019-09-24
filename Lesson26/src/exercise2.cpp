//Chapter 25 Exercise 1.
/*
Use the unique_ptr class to instantiate a Carp that inherits from Fish.
PAss the object as a Fish pointer and comment on slicing if any
*/
// Michael J. P. Morse

/*

*/
#include <iostream>
#include <memory>
#include <string>

using namespace std;


class Fish
{
public:
  Fish()
  {
    cout << "construct the Fish" << endl;
  };
  ~Fish()
  {
    cout << "destruct the fish" <<endl;
  }



  virtual void Swim() const
  {
    cout << "Fish swim in water" << endl;
  }

};

class Carp: public Fish
{
public:
  Carp()
  {
    cout << "construct the Carp" << endl;
  }

  void Swim() const
  {
    cout << "Carp swim in the lake" <<endl;
  }
};

void make_fish_swim(const unique_ptr<Fish>& fish)
{
  fish->Swim();
}

int main(int argc, char const *argv[]) {

  unique_ptr<Fish> up_carp (new Carp());
  unique_ptr<Fish> up_fish (new Fish());

  make_fish_swim(up_carp);
  make_fish_swim(up_fish);






  return 0;
}
