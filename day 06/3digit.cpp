#include <iostream>
using namespace std;

//take positive integer input and tell if it is a three digit number or not.

int main(){
  int x;

  cout<<"Number : ";
  cin>>x;

  if(x > 99 && x < 1000){
    cout<<"X is three digit number";

  }
  else{
    cout<<"x is not three digit number";
  }

  
  

}