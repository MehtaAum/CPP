#include <iostream>
using namespace std;

// Write a Program to perform the addition operation of two 2D arrays & store it in
// another array. Keep in mind that both array sizes must be the same.

int main(){
  int size;

    cout<<endl;
  cout<<"Enter array size = ";    
  cin>>size;
    cout<<endl;

  int a[size][size], b[size][size], c[size][size];

    // array a
    cout<<"Enter array a element"<<endl<<endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<<"a["<<i<<"]"<<"["<<j<<"] = ";
            cin>>a[i][j];
        }   
    }
    cout<<endl;
    // array a

     // array b
    cout<<"Enter array b element"<<endl<<endl;
     
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<<"a["<<i<<"]"<<"["<<j<<"] = ";
            cin>>b[i][j];
        }   
    }
    cout<<endl;
    // array b

    // array c
    cout<<"output array c is  : " <<endl<<endl;
     
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
           c[i][j] = a[i][j] + b[i][j];
           cout<<c[i][j]<<" ";
        }
        cout<<endl;   
    }
    // array c




      
}