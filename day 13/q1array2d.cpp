#include <iostream>
using namespace std;

// Write a Program to find the average of a given 2D array.

int main(){
  int size, sum = 0;
  float avg;

  cout<<"Enter array size = ";    
  cin>>size;

  int arr[size][size];

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
        cout<<"a["<<i<<"]"<<"["<<j<<"] = ";
        cin>>arr[i][j];
    }   
  }


  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
        // sum = sum + arr[i][j];
        sum += arr[i][j];
    }   
  }
        avg = (float)sum/size;

  cout<<"Average = "<<avg<<endl;
      
}