// Write a Program to find the sum of all 1D Array elements by passing an array as an
// argument using UDF.

#include <iostream>
using namespace std;

int pass(int a[],int index, int sum = 0){


    for (int i = 0; i < index; i++)
    {
      cout<<"arr["<<i<<"] = ";
      cin>>a[i];
    }  

    cout<<endl<<"output 1d array : ";

    for (int i = 0; i < index; i++)
    {
      cout<<a[i]<<" ";
      sum += a[i];
    }

    return sum;
}

int main(){

 int input, sum = 0;
 cout<<"Enter any number : ";
 cin>>input;

 int arr[input];

sum = pass(arr, input);
 
 cout<<endl<<endl<<"Sum of array element : "<<sum<<endl;
 
 
}