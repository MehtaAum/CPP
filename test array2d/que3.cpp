#include <iostream>
using namespace std;

//transpose of 2d array 

int main(){
  int size;

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

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
        cout<<a[j][i]<<" ";
    }
    cout<<endl;
  }



// 123
// 123
// 123


  
}