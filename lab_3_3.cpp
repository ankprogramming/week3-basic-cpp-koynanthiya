#include <iostream>

using namespace std;

int main() {

  const float pi = 3.14315926536 ;
  float r;
  float h=15;
  float Area;
  float Around;
float Cylinder;


  cout << "please enter radius :";
  cin >> r;

  Area = pi * r * r;
  cout << "Area of Circle: "  << Area <<  endl;

  Around = 2 *pi * r;
  cout << "Area of Circle: "  << Around <<  endl;

  Cylinder = 2 *r*h;
  cout << "Area of Circle: "  << Cylinder <<  endl;


  return 0;
}
