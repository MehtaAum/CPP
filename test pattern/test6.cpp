#include <iostream>
using namespace std;

//develop pattern

// 1                 1
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1

int main(){
  int space;
 
  for (int row = 1; row <= 5; row++)
  {
     for (int col = 1; col <= row; col++){
         cout<<col<<" ";
     }

    //  space
    for (int space = row; space <= 4; space++)
    {
        cout<<"  ";
    }
    
    for (int space = row; space <= 4; space++)
    {
        cout<<"  ";
    }
    //  space

     for (int col = row; col >= 1; col--){
         cout<<col<<" ";
     }
     cout<<endl;
  }
  
 
  

}