#include <iostream>
using namespace std;

//* * * * *
//*       *
//* * * * *
//*
//*

int main(){

for (int row = 1; row <= 5; row++)
{

    for (int col = 1; col <= 5; col++)
    {
       if (row == 2 && col >= 2 && col <= 4 ||
           row == 4 && col >= 2 && col <= 5 ||
           row == 5 && col >= 2 && col <= 5            
           )   
       {
         cout<<" "<<" ";
       }
       else{
           cout<<"*"<<" ";
       }
      
       
        
    }
    cout<<endl;
    
}



}