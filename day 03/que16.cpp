#include <iostream>
using namespace std;

//find minimum number of 3 variable using condition method.

int main (){
 
 int a,b,c;

 cout<<"A : ";
 cin>>a;
 cout<<"B : ";
 cin>>b;
 cout<<"C : ";
 cin>>c;

 
   if(a >= b && c >= b ){
   cout<<"minimum value : "<<b;
 }
 else if (b >= a && c >= a ){
   cout<<"minimum value : "<<a;
 }
 else{
    cout<<"minimum value : "<<c;
 }
 

}

