//make a function which calculates 'a' raised to the power 'b' using recursion

#include <iostream>
using namespace std;


int pow(int a , int b){
if(b == 0){
  return 1;
}
return a * pow(a,b-1); 

}

int main() {

int a,b;    
cout<<"base = ";
cin>>a;
cout<<"exponent = ";
cin>>b;

cout<<"Answer = "<<pow(a,b)<<endl;
}