#include <iostream>
using namespace std;

void reverse(int* arr ,int size){

    cout<<endl<<"Reverse array : ";

    for (int i = size-1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
    
}

int main() {
  int size = 0;
  cout<<"size = ";
  cin>>size;

  int* arr = new int[size];

  for (int i = 0; i < size; i++)
  {
    cout<<"arr["<<i<<"] = ";
    cin>>arr[i];
  }
  
  cout<<endl<<"Original array : ";

  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  
  }

  reverse(arr,size);

  delete[]arr;//free allocated memory

  
}