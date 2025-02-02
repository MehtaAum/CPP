#include <iostream>
using namespace std;

int main() {

    float a,b,c;
    cout<<"a : ";
    cin>>a; 
    cout<<"b : ";
    cin>>b;

try
{
    if (b == 0){
     throw "undefined";
    }
    c = a/b;
    cout<<c<<endl;

}

catch(const char *e){
 cout<<"exception occured at line 11: "<<e<<endl;
}


}