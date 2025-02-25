#include <iostream>
using namespace std;

//negative element in 1d array 

int main(){
  int size;

  cout<<"size = ";
  cin>>size;
  cout<<endl;

  int a[size];

  for (int i = 0; i < size; i++)
  {
    cout<<"a["<<i<<"] = ";
    cin>>a[i];
  }

  cout<<"Negative elements from an array : ";
  for (int i = 0; i < size; i++)
  {
    if (a[i] < 0)
    {
        cout<<a[i]<<" ";
    }
    
  }

  
}