#include <iostream>
using namespace std;
// Write a Program to print the below Inverted Left Half Pyramid pattern using nested for
// loop.
// 5 4 3 2 1
//   4 3 2 1
//     3 2 1
//       2 1
//         1


int main(){
    int s;//for spacing

for (int row = 5; row >= 1; row--)
{

    for ( s = 5; s >= row; s--)
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