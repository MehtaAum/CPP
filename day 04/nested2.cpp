#include <iostream>
using namespace std;

//find 4 min no. using nested.

int main (){

 int a,b,c,d;

 cout<<"a : ";
 cin>>a;
 cout<<"b : ";
 cin>>b;
 cout<<"c : ";
 cin>>c;
 cout<<"d : ";
 cin>>d;

 if(a < b){
    if(a < c){
       if(a < d){
            cout<<"min number : ";
            cout<<a; 
       }
       else{
         cout<<"min number : ";
        cout<<d;
       }
    }
    else{
      cout<<"min number : ";
        cout<<c;
    }
 }

  else{
    if(c < d){
       if(c < b){
         cout<<"min number : ";
         cout<<c;
       }
       else{
         cout<<"min number : ";
        cout<<b;
    }
    }
    else{
      cout<<"min number : ";
        cout<<d;
    }
    
   
 }




}

