#include <iostream>
using namespace std;

//find 3 min no. using ternary.

int main (){

 int x,y,z;
 
 cout<<"X : ";
 cin>>x;
 cout<<"Y : ";
 cin>>y;
 cout<<"Z : ";
 cin>>z;

 (x < y) ? (x < z) ? cout<<x : cout<<z : (y < z) ? cout<<y: cout<<z;   

}

