#include <iostream>
using namespace std;

//Write a Program to find the sum of anti diagonal elements from a given 2D array.

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

// method 1
      for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i+j == size-1 )
            {
                sum += a[i][j];  
            }
            
        }
          
    }
// method 1

// method 2
// cout<<endl;
//       for (int i = 0; i < size; i++)
//     {
//         for (int j = size-1; j >= 0; j--)
//         {
//            if (i+j == size-1 )
//             {
//                 sum += a[i][j];  
//             }
          
//         }
          
//     }
// method 2


    cout<<"the sum of anti diagonal elements of an array =  "<<sum<<endl<<endl;





   




      
}