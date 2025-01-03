#include <iostream>
using namespace std;

//develop pattern
//        5
//      4 5 4
//    3 4 5 4 3
//  2 3 4 5 4 3 2
//1 2 3 4 5 4 3 2 1

int main(){
  int space;

  for (int row = 5; row >= 1; row--)
  {
    // space
    for (int space = row; space >= 2; space--)
    {
      cout<<"  ";
    }
    
    // space

    for (int col = row; col <= 4; col++)
    {
      cout<<col<<" ";
    }
    

    for (int col = 5; col >= row ; col--)
    {
      cout<<col<<" ";
    }
    cout<<endl;
    
  }
  

}