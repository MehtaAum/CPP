#include <iostream>
using namespace std;

//find min element from 1d array.

int main(){

  int size, min;
  cout<<"SIZE OF ARRAY = ";
  cin>>size;


  int a[size];

  for (int i = 0; i < size; i++)
  {
    cout<<"a["<<i<<"]"<<" = ";
    cin>>a[i];
  }

  min = a[0];

  for (int i = 0; i < size; i++)
  {
    if (a[i] < min)
    {
        min = a[i];
    }
   
         
  }
  
  cout<<endl<<"minimum number : "<<min<<endl;


  

}
