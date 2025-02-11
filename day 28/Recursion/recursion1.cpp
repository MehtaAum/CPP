//print n to 1 using recursion

#include <iostream>
using namespace std;

void num(int a){

 if (a == 0) return;   
 
 cout<<a<<endl;
 num(a-1);  // it working like a loop
 
}

int main(){

 num(10);
        
}