#include <iostream>
using namespace std;
// Write a Program to print the below pattern using nested for loop.
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

int main(){
    int s;//for spacing

// first L  
for (int row = 5; row >= 1; row--)
{




        for (int col = 1; col <= row; col++)
        {
            
            cout<<col<<" ";
            
        }


        cout<<endl;



}
// first l 


// sec L  

for (int row = 2; row <= 5; row++)
{



        for (int col = 1; col <= row; col++)
        {
            
            cout<<col<<" ";
            
        }

        cout<<endl;




}
// sec l 



}