#include <iostream>
using namespace std;

// Write a Program to print the below Full Pyramid pattern using nested for loop.

//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

int main(){

int s;

for (int row = 1; row <= 5; row++)
{

  for ( s = 4; s >= row; s--)
  {
    cout<<" "<<" ";
  }
  

  for (int col = 1; col <= row; col++)
  {
    cout<<"*"<<" ";
  }
  for (int col = row-1; col >= 1; col--)
  {
    cout<<"*"<<" ";
  }
  cout<<endl;

}


}