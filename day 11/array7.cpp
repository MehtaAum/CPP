#include <iostream>
using namespace std;

//reverse element from 1d array.

int main(){

  int size;
  cout<<"SIZE OF ARRAY = ";
  cin>>size;


  int a[size];

  for (int i = 0; i < size; i++)
  {
    cout<<"a["<<i<<"]"<<" = ";
    cin>>a[i];

  }
 
  for (int i = size-1; i >= 0; i--)
  {
    cout<<a[i]<<" ";
  }
 


  

}
