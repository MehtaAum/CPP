#include <iostream>
using namespace std;

//take 3 number input and tell if they can be sides of a triangle.

int main(){
  int a,b,c;

  cout<<"A : ";cin>>a;  cout<<"B : ";cin>>b;  cout<<"C : ";cin>>c;
  
  if( (a+b)>c  &&  (b+c)>a  &&  (a+c)>b){//i add this parenthesis coz of the precedences value is higher so it is safer you can do also without the parenthesis but it is safer to add ().
      cout<<"ANS : ";    
      cout<<"Valid Triangle";
  }
  else{
      cout<<"ANS : ";
      cout<<"Invalid Triangle";
  }

}