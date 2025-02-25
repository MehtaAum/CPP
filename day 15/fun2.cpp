// Write a Program to find the length of the String by passing a string as an argument
// using UDF. Do not use any string function.

// For example,
// Input:
// Enter any string: development
// Output:
// Length is: 11

#include <iostream>
using namespace std;

int call(string n){

   int count = 0; 
  
   while (n[count] != '\0')
   {
       count++;
           
   }
   return count;

}
int main(){
 
 int count = 0;
 string input;
 cout<<"Enter any string : ";
 cin>>input;

 count = call(input);

 cout<<"length is : "<<count<<endl;

}