#include <iostream>
using namespace std;
// Q.3 Triangle Angle Finder
// Write a program to find the third angle of a right triangle when two other angles are given.
// Example:
// Input: First angle: 65, Second angle: 45
// Output: Third angle: 70

int main (){
 
 float f,s,t;

 cout<<"First angle : ";
 cin>>f;
 cout<<"Sec angle : ";
 cin>>s;

 t = 180 - (f + s);
 
 cout<<"Third angle : "<<t;
}