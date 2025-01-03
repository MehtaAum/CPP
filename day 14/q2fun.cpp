//Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF.

#include <iostream>
using namespace std;

int num(int user){
 
 return user%3 == 0 && user%5 == 0 ;

}

int main(){

  int user;

  cout<<"Enter any number : ";
  cin>>user;

  if (num(user))
  {
    cout<<"both 3 & 5 is divisible"<<endl;
  }
  else{
    cout<<"both 3 & 5 is not divisible"<<endl;
  }
  

}       