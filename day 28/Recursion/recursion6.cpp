//make a function which calculate the factorial of n using recursion 

#include <iostream>
using namespace std;

int fac(int n){
   if(n == 0 || n == 1){
     return 1;
   }
   return n * fac(n-1); 

   //tree diagram of recursion to understand:
   //fac(5)
     //5 * fac(4)
       //4 * fac(3)
         //3 * fac(2)
           //2 * fac(1)
}

int main() {
int n;    
cout<<"Enter n : ";
cin>>n;
cout<<"Factorial of n is = "<<fac(n)<<endl;
}