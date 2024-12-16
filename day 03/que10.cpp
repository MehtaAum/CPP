#include <iostream>
using namespace std;

// Q.1 Temperature Converter
// Develop a program that converts temperature from degrees Celsius to Fahrenheit using the
// formula: °F = (9/5 × °C) + 32

// Example:
// Input: The temperature in Celsius: 38
// Output: The temperature in Fahrenheit: 100.4


int main (){
 
  float d, f = 33.8;
  
  cout<<"temperature in Celsius : ";
  cin>>d;

//   formula
   
   f = (9.0/5.0 * d) + 32; // i give 9.0/5.0 rather than 9/5 coz floating no. if i write that result will be 1 if add .0 then 1.8
   
   cout<<"temperature in Fahrenheit :";
   cout<<f;
  
}