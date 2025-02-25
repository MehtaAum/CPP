#include <iostream>
using namespace std;

// Write a Program to find the average of a 1D array.
// For example,
// Input:
// Enter array size: 5
// Enter array elements:
// a[0] = 12
// a[1] = 42
// a[2] = 18
// a[3] = 50
// a[4] = 26
// Output:
// Average of an Array: 29.6


int main(){

  int size,sum = 0;
  float div = 0;

  cout<<"size : ";
  cin>>size;
  cout<<endl;

  int box[size] ; 

  for (int i = 0; i < size; i++)
  {
   cout<<"a ["<<i<<"]"<<" = ";
   cin>>box[i];
  }
  cout<<endl;

  for (int i = 0; i < size; i++)
  {
    sum += box[i];
    div = (float)sum/size;

  }
  
  cout<<"Average of an Array : "<<div;


}