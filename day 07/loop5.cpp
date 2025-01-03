#include <iostream>
using namespace std;
//print odd & even numbers between 78 to 123 using while loop.
int main (){

    int s = 78, e = 123;

    while (s <= 123)
    {
        if(s%2 == 0){
              cout<<"even : "<<s<<endl;
        }
        else{
              cout<<"odd : "<<s<<endl;
        }

        s++;
    }
    
    
    

}
