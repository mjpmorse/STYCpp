#include<iostream>


double volume(double Radius) ; //Calculate the radius of a sphere
double volume(double Radius, double Height); //calculate volume of cylinder
double pi(); //returns pi


int main(int argc, char const *argv[]) {
  /* code */
  using std::cout;
  using std::cin;
  using std::endl;

  double radius = 5;
  double height = 2;

  cout << "volume of the sphere is: " << volume(radius) << endl;
  cout << "volume of the cylinder is: " << volume(radius,height)<<endl;
  return 0;
}

double pi(){
  return 3.1416;
}

double volume(double Radius){
  double volume = 4 *pi()*Radius*Radius*Radius;
  return volume;
}

double volume(double Radius, double Height){
  double volume = pi()*Radius*Radius*Height;
  return volume;
}
