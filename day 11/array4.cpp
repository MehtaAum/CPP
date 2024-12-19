#include <iostream>
using namespace std;

//find the negative number from 1d array.

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



  cout<<"Negative output : ";

  for (int i = 0; i < size; i++)
  {
    if (a[i] < 0)
    {
        cout<<a[i]<<", ";
    }
    
  }

  

}
