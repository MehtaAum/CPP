#include <iostream>
using namespace std;

//develop pattern
// 1 0 1 0 1
//   1 0 1 0
//     1 0 1
//       1 0
//         1

int main(){

  int space;

  for (int row = 5; row >= 1; row--)
  {
    // space
    for (int space = 5; space >= row+1; space--)
    {
      cout<<"  ";
    }    
    // space

    for (int col = 1; col <= row; col++)
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