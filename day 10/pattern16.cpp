#include <iostream>
using namespace std;
// Write a Program to print the below Hallow Diamond look alike pattern using nested
// for loop.
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3         3 2 1
// 1 2             2 1
// 1                 1
// 1                 1
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1

int main(){
    int s;//for spacing

// first L  
for (int row = 5; row >= 1; row--)
{




        for (int col = 1; col <= row; col++)
        {
            
            cout<<col<<" ";
            
        }

        // space
        for ( s = 4; s >= row; s--)
            {
                cout<<" "<<" ";
            }
        for ( s = 4; s >= row; s--)
            {
                cout<<" "<<" ";
            }
        // space

        for (int col = row; col >= 1; col--)
        {
            
            cout<<col<<" ";
            
        }
        cout<<endl;



}
// first l 


// sec L  

for (int row = 1; row <= 5; row++)
{



        for (int col = 1; col <= row; col++)
        {
            
            cout<<col<<" ";
            
        }

        // space
        for ( s = 4; s >= row; s--)
            {
                cout<<" "<<" ";
            }
        for ( s = 4; s >= row; s--)
            {
                cout<<" "<<" ";
            }
        // space

        for (int col = row; col >= 1; col--)
        {
            
            cout<<col<<" ";
            
        }
        cout<<endl;




}
// sec l 



}