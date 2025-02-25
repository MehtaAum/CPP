#include <iostream>
using namespace std;

//Write a Program to find the sum of diagonal elements from a given 2D array.

int main(){
  int size,sum = 0;

    cout<<endl;
  cout<<"Enter array size = ";    
  cin>>size;
    cout<<endl;

  int a[size][size];

    cout<<"(enter element)"<<endl<<endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<<"a["<<i<<"]"<<"["<<j<<"] = ";
            cin>>a[i][j];
        }   
    }
    cout<<endl<<"(output) : "<<endl<<endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;   
    }
    // 1 2 3
    // 4 5 6
    // 7 8 9

    //00, 11, 22

   
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
          if (a[i] == a[j] )
          {
             sum += a[i][j];
          }

          
        }

    }
    
    cout<<"the sum of diagonal elements of an array =  "<<sum<<endl<<endl;





   




      
}