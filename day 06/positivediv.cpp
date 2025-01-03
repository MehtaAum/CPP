#include <iostream>
using namespace std;

//take positive integer input and tell if it is divisible by 5 and 3.

int main(){
  int input;

  cout<<"input : ";
  cin>>input;

  if(input % 5 == 0 && input % 3 == 0){//dono true he to he code chalega.
       cout<<"it is divisible";
  }
  else{
    cout<<"it is not divisible";
  }


}