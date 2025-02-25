#include <iostream>
using namespace std;

//sum of elements in row & column of 2d array.

int main(){
  int size,index,sum = 0,col, plus = 0;

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
cout<<endl;


cout<<"enter row number : ";
cin>>index;
  for (int i = index; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {     
        cout<<a[index][j]<<" ";
        sum += a[index][j];
    }
        break;    
  }

  cout<<endl<<"the sum of a row : "<<sum;
//1 2 3
//4 5 6
//7 8 9

cout<<endl<<endl<<"enter col number : ";
cin>>col;
  for (int i = 0; i < size; i++)
  {
  
    cout<<a[i][col]<<" ";
  
    plus += a[i][col];
 
     
  }

  cout<<endl<<"the sum of a col : "<<plus<<endl;



  
}