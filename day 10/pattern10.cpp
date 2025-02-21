#include <iostream>
using namespace std;
// Write a Program to print the below Left Half Pyramid pattern using nested for loop.
//         5
//       4 5
//     3 4 5
//   2 3 4 5
// 1 2 3 4 5

int main(){
    int s;//for spacing

for (int row = 5; row >= 1; row--)
{

    for ( s = 2; s <= row; s++)
    {
        cout<<" "<<" ";
    }

    


  for (int col = row; col <= 5; col++)
  {
    cout<<col<<" ";
  }
  cout<<endl;

  

}

}