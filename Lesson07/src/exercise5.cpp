#include<iostream>


void circumference(double Radius,double &circumference) ; //Calculate the circumference of a circle
void area(double Radius,double &Area); //calculate area of cylinder
double pi(); //returns pi


int main(int argc, char const *argv[]) {
  /* code */
  using std::cout;
  using std::cin;
  using std::endl;

  double radius = 5;

  double MyArea = 0;
  double MyCircumference = 0;
  area(radius,MyArea);
  circumference(radius,MyCircumference);


  cout << "circumference of the circule is: " << MyCircumference << endl;
  cout << "Area of the circle is: " << MyArea<<endl;
  return 0;
}

double pi(){
  return 3.1416;
}

void circumference(double Radius,double &_cir){
   _cir = 2*pi()*Radius;
}

void area(double Radius,double &_Area){
   _Area = pi()*Radius*Radius;
}
