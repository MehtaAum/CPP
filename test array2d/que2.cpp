#include <iostream>
using namespace std;

//largest element in 2d array 

int main(){
  int size, temp = 0;

  cout<<"size = ";
  cin>>size;
  cout<<endl;

  int a[size][size];

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
        cout<<"a["<<i<<"]"<<"["<<j<<"] = ";
        cin>>a[i][j];
    }
  }

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
     
     if (temp < a[i][j])
     {
        temp = a[i][j];
     }
     
            
    }
  }

cout<<"largest number is = "<<temp;



  
}