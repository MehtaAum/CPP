#include <iostream>
using namespace std;
//Write a Program to print leap years between two given numbers using a while loop.

int main(){
    int x, y;

    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;

  while (x <= y)
  {
     if(x%4 == 0)
     {
        cout<<x<<endl;
     }
   x++;
  }
  
}