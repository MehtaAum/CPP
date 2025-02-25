// * * * * * 
//  *     *  
//   *   *   
//    * *    
//     *     
//    * *    
//   *   *   
//  *     *  
// * * * * * 


#include <iostream>
using namespace std;

int main(){
int r = 0;    

cout<<"enter row & col : ";
cin>>r;


for (int i = 1; i <= r; i++)
{
  for (int j = 1; j <= r; j++)
  {
    if (i > 1 && i < r)
    {
        if (i == j || i + j == r + 1)
        {
         cout<<"* ";
        }
        else{
         cout<<"  ";
        }
    }
    else{
         cout<<"* ";
    }
    
   

  }
  cout<<endl;
  
}




}
