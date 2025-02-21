#include <iostream>
using namespace std;

//take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.

int main(){
  int input;

  cout<<"input : "; cin>>input;

  if((input%5==0 || input%3==0) && (input%15!=0) ){
       
       cout<<"Divisible by 5 or 3 but not 15";
        
  }
  else{
    cout<<"Divisible by 15 or neither 5 nor 3";
  }

  
}