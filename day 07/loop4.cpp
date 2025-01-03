#include <iostream>
using namespace std;
//print odd & even numbers between 235 to 567 using do while loop.
int main (){
    
    int s = 235, e = 567;

    do
    {
        if(s%2 == 0){
             cout<<"Even : "<<s<<endl;

        }
        else{
             cout<<"odd : "<<s<<endl;
        }

      s++;   

    } while (s <= e);


}
