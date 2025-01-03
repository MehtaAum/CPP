#include <iostream>
using namespace std;
//Write a Program to find the cube of a given number using UDF.


void cube(){

 int user,ans;

 cout<<"Enter number : ";
 cin>> user;

 ans = user * user * user;

 cout<<"ANS : "<<ans<<endl;

}

int main(){

 cube();

}