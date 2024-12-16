#include <iostream>
using namespace std;
// Write a Program to evaluate the formula: (𝑥 + 𝑦)2

int main (){
  int x,y,v;

  cout<<"x : ";
  cin>>x;
  cout<<"y : ";
  cin>>y;

// formula
//   (𝑥 + 𝑦)2
//   (𝑥 + y) (𝑥 + y)
//   x(𝑥 + y) y(𝑥 + y)
//   x2 + xy + xy + y2
//   x2 + 2xy + y2

  v = x*x + (x*y)*2 + y*y;

  cout<<"v = ";
  cout<<v;



}