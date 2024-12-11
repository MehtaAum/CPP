#include <iostream>
using namespace std;
//Write a Program to print even numbers from 1 to N using a do-while loop

int main(){
    int x = 1,n;
    cout<<"write a number : ";
    cin>>n;
 do
 {
    if(x%2 == 0){
        cout<<x<<endl;
    }
    x++;

 } while (x<=n);
 
   
}