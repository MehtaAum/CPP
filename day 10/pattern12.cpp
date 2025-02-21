#include <iostream>
using namespace std;
// Write a Program to print the below Inverted Left Half Pyramid pattern using nested for
// loop.
// 1 0 1 0 1
//   0 1 0 1
//     1 0 1
//       0 1
//         1


int main(){
    int s;//for spacing

for (int row = 1; row <= 5; row++)
{

    for ( s = 2; s <= row; s++)
    {
        cout<<" "<<" ";
    }

    
  for (int col = row; col <= 5; col++)
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