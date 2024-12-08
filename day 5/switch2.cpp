#include <iostream>
using namespace std;

int main(){
    int x,y;
    char input;

    cout<<"x : ";cin>>x;
    cout<<"y : ";cin>>y;
    cout<<"input : ";cin>>input;

    switch (input)
    {
      case '+':
         cout<<"ANSWER : ";
         cout<<x+y;
      break;
      case '-':
         cout<<"ANSWER : ";
         cout<<x-y;
      break;
      case '*':
         cout<<"ANSWER : ";
         cout<<x*y;
      break;
      case '/':
         cout<<"ANSWER : ";
         cout<<x/y;
      break;

      default:
         cout<<"Error write again !";
      break;

    }
}