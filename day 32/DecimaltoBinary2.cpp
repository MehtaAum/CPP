//converting decimal to binary (method 2)

#include <iostream>
#include <math.h> //include to use power
using namespace std;

int main() {

    int n , ans = 0 , i = 0;
    int bits;


    cout<<"-------------- Decimal to Binary Converter --------------"<<endl;
    cout<<"Enter Number = ";
    cin>>n;

    if(n == 0){
        cout<<"Binary = 0"<<endl;
        return 0;
    }
    if(n < 0){
        cout<<"Note : Negative numbers are not represent in this program"<<endl;
        n = -n;

    }

    while(n != 0){
        
        bits = n&1;

        ans = (round(bits * pow(10 , i) )) + ans; //round the result of power to avoid inaccuracy

        n = n >> 1;
        i++;
    }
    cout<<"Binary = "<<ans<<endl;


}