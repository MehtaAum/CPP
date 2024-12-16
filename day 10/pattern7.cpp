#include <iostream>
using namespace std;
// Write a Program to print the below Right Half Pyramid pattern using nested for loop.
// A
// B A
// C B A
// D C B A
// E D C B A


int main(){

for (char row = 'A'; row <= 'E'; row++)
{
  for (char col = row; col >= 'A'; col--)
  {
    cout<<col<<" ";
  }
  cout<<endl;

  

}

}