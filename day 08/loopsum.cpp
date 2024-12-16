#include <iostream>
using namespace std;
//Write a Program to print the Fibonacci series up to N numbers using a for loop.
//0,1,1,2,3,5..
int main(){
   
 int start,end,a = -1,b = 1,ans;

 cout<<"input : ";
 cin>>end;

 for (start = 1; start <= end; start++)
 {
    ans = a + b;
    a = b; 
    b = ans;

    cout<<ans<<endl;
 }
 
}