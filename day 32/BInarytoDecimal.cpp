//converting Binary to Decimal

#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int n , ans = 0 , i = 0;

    cout<<"---- Binary to Decimal converter ----"<<endl;
    cout<<"Enter Binary Number = ";
    cin>>n;

    while(n != 0){

        int digit = n%10;
        
        if(digit == 1){
            ans = ans + pow(2 , i);
        }

        n = n/10;
        i++;
    }
    cout<<ans<<endl;

}