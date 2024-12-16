#include <iostream>
using namespace std;
// Write a Program to print the below Floyd’s Triangle pattern using nested for loop.
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

int main(){

int count = 1;

for (int row = 5; row >= 1; row--)
{
  for (int col = row; col <= 5; col++)
  {
    cout<<count++<<" ";
  }
  cout<<endl;

  

}

}