#include <iostream>
using namespace std;

// Write a Program to find if a given number is neutral or not using a ladder if else.
// For example,
// Input:
// Enter any number: -9
// Output:
// This number is Negative
// -----------------------------------------------
// For example,
// Input:
// Enter any number: 0
// Output:
// This number is Neutral
// -----------------------------------------------
// For example,
// Input:
// Enter any number: 7
// Output:
// This number is Positive

int main (){

float x;

cout<<"Enter number : ";
cin>>x;

if (x>0){
 cout<<"this number is positive : " <<x;
}

else if (x<0){
 cout<<"this number is negative : " <<x;
}

else {
 cout<<"this number is neutral : " <<x;
}


}