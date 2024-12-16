#include <iostream>
using namespace std;

// Write a Program to find the minimum number from the given 2 numbers using if else.
// For example,
// Input:
// Enter a value of the first number: 8
// Enter a value of the second number: 3
// Output:
// The minimum value is: 3

int main (){

 float a,b,v;

 cout<<"Enter a value of the first number: ";
 cin>>a;
 cout<<"Enter a value of the sec number: ";
 cin>>b;

if (a != b)
{
 
 if(a >= b)
 {
   cout<<"The minimum value is: "<<b;
 }
 else
 {
   cout<<"The minimum value is: "<<a;
 }

}
else{
    cout<<"( Value is equal )";
}

}