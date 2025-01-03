#include <iostream>
using namespace std;
// Write a Program to print the below Inverted Left Half Pyramid pattern using nested for
// loop.
// 5 4 3 2 1
//   5 4 3 2
//     5 4 3
//       5 4
//         5


int main(){
    int s;//for spacing

for (int row = 1; row <= 5; row++)
{

    for ( s = row; s >= 1; s--)
    {
        cout<<" "<<" ";
    }

    
  for (int col = 5; col >= row; col--)
  {
    
    cout<<col<<" ";
    
  }
  cout<<endl;

  

}

}