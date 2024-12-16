#include <iostream>
using namespace std;

// Write a Program to Swap two variables using the third variable.


int main (){
 
 int x, y, temp;

 cout<<"x : ";
 cin>>x;
 cout<<"y : ";
 cin>>y;
 
 temp = x;
 x = y;
 y = temp;
  
 cout<<"swap x : "; 
 cout<<x<<endl; 
 cout<<"swap y : ";
 cout<<y<<endl;

 
}