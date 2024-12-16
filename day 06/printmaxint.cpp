#include <iostream>
using namespace std;

//take 3 positive integers input and print the greatest og them.

int main(){
  int a,b,c;

  cout<<"A : ";cin>>a;  cout<<"B : ";cin>>b;  cout<<"C : ";cin>>c;
  
  if(a > b){
    if(a > c){
       cout<<"Max : "<<a;
    }
    else{
        cout<<"Max : "<<c;
    }
  }

  else{
    if(b > c){
        cout<<"Max : "<<b;
    }
    else{
        cout<<"Max : "<<c;
    }
  }
  
}