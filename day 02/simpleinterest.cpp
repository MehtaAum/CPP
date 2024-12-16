#include <iostream>
using namespace std;

// calculate simple interest si = p*r*t/100

int main() {
    float p, r, t, total;

    cout<<endl;
    
    cout<<"Principle : ";
    cin>>p;

    cout<<"Rate : ";
    cin>>r;

    cout<<"Time : ";
    cin>>t;
   
    total = p*r*t/100;  
    
    cout<<"total : ";
    cout<<total;

    cout<<endl<<endl;
}