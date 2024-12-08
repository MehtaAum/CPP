#include <iostream>
using namespace std;

//find min number using 5 variable with ternary.

int main (){

 double a,b,c,d,e;
 
 cout<<"A : ";
 cin>>a;
 cout<<"B : ";
 cin>>b;
 cout<<"C : ";
 cin>>c;
 cout<<"D : ";
 cin>>d;
 cout<<"E : ";
 cin>>e;


// ternary
(a < b) ? (a < c) ? (a < d) ? (a < e) ?
cout<<a:cout<<e
:cout<<d
:cout<<c

:(c < d) ? (c < b) ? (c < e) ?
cout<<c:cout<<e
:(e < d) ? (e < b) ? 
cout<<e:cout<<b
:(b < d) ?
cout<<b:cout<<d
:cout<<d;
// ternary

}

