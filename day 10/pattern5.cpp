#include <iostream>
using namespace std;
// Write a Program to print the below Inverted Right Half Pyramid pattern using nested
// for loop.
// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5

int main(){

for (int row = 1; row <= 5; row++)
{
  for (int col = row; col <= 5; col++)
  {
    cout<<row<<" ";
  }
  cout<<endl;

}

}