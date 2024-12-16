#include <iostream>
using namespace std;
// Write a Program to print the below Full Pyramid pattern using nested for loop.
//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
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
    cout<<col<<" ";
  }
  for (int col = row-1; col >= 1; col--)
  {
    cout<<col<<" ";
  }
  cout<<endl;

}


}