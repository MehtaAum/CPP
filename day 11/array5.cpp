#include <iostream>
using namespace std;

//find max element from 1d array.

int main(){

  int size, max;
  cout<<"SIZE OF ARRAY = ";
  cin>>size;


  int a[size];

  for (int i = 0; i < size; i++)
  {
    cout<<"a["<<i<<"]"<<" = ";
    cin>>a[i];
  }

  max = a[0];

  for (int i = 0; i < size; i++)//4
  {
    if (a[i] > max)
    {
        max = a[i];
    }
         
  }
  
  cout<<endl<<"maximum number : "<<max<<endl;


  

}
