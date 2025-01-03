#include <iostream>
using namespace std;

//give the sum of first digit and last digit. example: 512 = 5+2 = 7


int main(){

 int input, last, first, ans;
//example = 456
 cout<<"Enter the number : ";
 cin>>input;
 
 last  = input;
 last  = last %10; // 45.6 = 6

 first  = input;
 while (first  >= 10)
 {
    first  = first /10;//456/10 = 45.6/10 = 4.56 = 4
 }

 ans = last + first  ;// 6 + 4 = 10
 cout<<ans;
 


}