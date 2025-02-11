//print sum from 1 to n (parameterized)

#include <iostream>
using namespace std;

void num(int a , int sum){

 if (a == 0){
    cout<<"Sum = "<<sum<<endl;
    return;
 }
 
 cout<<a<<endl;
 num(a-1,sum+a); 
 
}

int main(){

 int n;
 cout<<"Enter n : ";
 cin>>n;
 num(n,0);
        
}