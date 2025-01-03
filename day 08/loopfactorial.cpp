
#include <iostream>
using namespace std;
// Write a Program to print the Fibonacci series up to N numbers using a for loop.
// like factorial
int main()
{

   int input,ans;

   cout<<"input number :";
   cin>>input;

   for (int i = input-1; input >= 1; i--)
   {
      ans = input * i;// 20 * 3 = 60
      input = ans;//60  
      cout<<ans<<endl;    
   }
   
   
}