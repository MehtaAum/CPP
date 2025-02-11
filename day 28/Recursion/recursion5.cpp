//print sum from 1 to n (return type)

#include <iostream>
using namespace std;

int sum(int n){
   if(n == 1){
     return 1;
   }
   return n + sum(n-1); 

  //dryrun : let's say n = 3
  //first time :  3 + sum(2);  //sum(2)call the sum function itself
  //second time : 2 + sum(1); // when sum(1) check if statement it return 1 
  //so, 2 + 1 = 3
  //it return than to first 3 + 3 = 6 
  //so, answer is 6.
}

int main() {
int n;    
cout<<"Enter n : ";
cin>>n;
cout<<"sum = "<<sum(n)<<endl;
}