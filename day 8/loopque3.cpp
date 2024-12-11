#include <iostream>
using namespace std;
//Write a Program to print 1 to N using a while loop..

int main(){
    int start = 1, n;

    cout<<"Enter any number : "; 
    cin>>n;
    cout<<"output : "<<endl; 

  while (start <= n)
  {
     
    cout<<start<<endl; 
    start++;
  }
  
}