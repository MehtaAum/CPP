#include <iostream>
using namespace std;

//Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array.

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
            if (i >=1 && i <=size-2 && j >= 1 && j <=size-2 )
            {
              cout<<" "<<" ";
            }
            else{
                cout<<a[i][j]<<" ";
                sum += a[i][j];

            }
            
        }
        cout<<endl;   
    }


    cout<<"the sum of boundary elements of an array = "<<sum<<endl;

      
}