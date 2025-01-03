#include <iostream>
using namespace std;

//find 3 min no. using nested.

int main (){

 int x,y,z;

 cout<<"x : ";
 cin>>x;
 cout<<"y : ";
 cin>>y;
 cout<<"z : ";
 cin>>z;

 if (x < y)
 {
    if (x < z)
    {
        cout<<x;
    }
    else{
        cout<<z;
    }
 }

 else{
   if(y < z){
    cout<<y;
   }
   else{
    cout<<z;
   }
 }

}

