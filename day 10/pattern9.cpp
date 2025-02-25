#include <iostream>
using namespace std;
// Write a Program to print the below Left Half Pyramid pattern using nested for loop.
//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1

int main(){
    int s;//for spacing

for (int row = 1; row <= 5; row++)
{

    for ( s = row; s <= 4; s++)
    {
        cout<<" "<<" ";
    }
    


  for (int col = row; col >= 1; col--)
  {
    cout<<col<<" ";
  }
  cout<<endl;

  

}

}