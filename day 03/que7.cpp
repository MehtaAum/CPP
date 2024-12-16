#include <iostream>
using namespace std;
// Write a Program to evaluate the formula: (𝑥 + 𝑦)3

int main (){
 
 int x,y,v;
 
 cout<<"x : ";
 cin>>x;
 cout<<"y : ";
 cin>>y;

// formula
// (𝑥 + 𝑦)3
// (𝑥 + y)*(𝑥 + y)*(𝑥 + y)

v = (x + y) * (x + y) * (x + y);

cout<<"v = "<<v;

}