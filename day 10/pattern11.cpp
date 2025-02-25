#include <iostream>
using namespace std;
// Write a Program to print the below Left Half Pyramid pattern using nested for loop.
//         5
//       4 4
//     3 3 3
//   2 2 2 2
// 1 1 1 1 1

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
    cout<<row<<" ";
  }
  cout<<endl;

  

}

}