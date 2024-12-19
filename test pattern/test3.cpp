#include <iostream>
using namespace std;

//develop pattern
//        5
//      4 5
//    3 4 5
//  2 3 4 5
//1 2 3 4 5

int main(){

  int space;
 
  for (int row = 5; row >= 1 ; row--)
  {

    for ( space = row-1; space >= 1; space--)
    {
        cout<<"  ";
    }
    

    for (int col = row; col <= 5; col++)
    {
        cout<<col<<" ";
    }
    cout<<endl;
    
  }
  

}