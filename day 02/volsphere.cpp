#include <iostream>
using namespace std;

//calculate volume of sphere  V=4/3 πr3

int main()
{

  float pie = 3.14, r, vol;

  cout<<"( Volume of sphere )"<<endl;
  cout<<"Radius : ";
  cin>>r;

  vol = 4.0/3.0*pie*r*r*r; /* 4.0 & 3.0 is for floating number (my mistake was not doing with .0) */


  cout<<"Vol of Sphere : ";
  cout<<vol;
}