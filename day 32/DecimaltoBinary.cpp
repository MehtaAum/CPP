//converting decimal to binary

#include <iostream>
using namespace std;

int main() {

    int n , bits;
    string binary;

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

        n = n>>1;
        binary = to_string (bits) + binary;

    }
    cout<<"Binary = "<<binary<<endl;


}