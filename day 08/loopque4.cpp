#include <iostream>
using namespace std;
//Write a Program to print odd numbers from N to 1 using a while loop.

int main(){
    int n, start =1;

    cout<<"Enter any number : "; 
    cin>>n;
    cout<<"output : "<<endl; 

  while (start <= n)
  {
     if(n%2 != 0)
     {
        cout<<n<<endl;
     }
   n--;
  }
  
}