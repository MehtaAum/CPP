#include <iostream>
using namespace std;
// Write a Program to print the below Inverted Right Half Pyramid pattern using nested
// for loop.
// 1 0 1 0 1
// 1 0 1 0
// 1 0 1
// 1 0
// 1


int main(){

for (int row = 1; row <= 5; row++)
{
  for (int col = 5; col >= row; col--)
  {
        if (col%2 == 0)
        {
            cout<<"0"<<" ";
        
        }
        else{
            cout<<"1"<<" ";
        }
  }
  cout<<endl;

  
  

}

}