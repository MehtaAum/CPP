#include <iostream>
using namespace std;

// Write a Program to Swap two variables using the third variable.


int main (){
 
 int x, y;

 cout<<"x : ";
 cin>>x;
 cout<<"y : ";
 cin>>y;

 x = x + y;
 y = x - y;
 x = x - y;

 cout<<"swap x : "; 
 cout<<x<<endl; 
 cout<<"swap y : ";
 cout<<y<<endl;

 
}