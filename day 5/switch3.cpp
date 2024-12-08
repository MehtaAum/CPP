#include <iostream>
using namespace std;

int main(){

    int input,a,b,c;
    
    cout<<"input : ";cin>>input;
    cout<<"a : ";cin>>a;
    cout<<"b : ";cin>>b;
    cout<<"c : ";cin>>c;

    switch (input)
    {
        
      case 1:
      if(a < b){
          if(a < c){
              cout<<"min: ";
              cout<<a;
          }
          else{
            cout<<"min: ";
            cout<<c;
          }
      }
      else{
        if(b < c){
            cout<<"min: ";
            cout<<b;

        }
        else{
        cout<<"min: ";
        cout<<c;
        }
      }
         
      break;

      case 2:
         if(a > b){
          if(a > c){
              cout<<"max: ";
              cout<<a;
          }
          else{
            cout<<c;
          }
      }
      else{
        if(b > c){
            cout<<"max: ";      
            cout<<b;

        }
        else{
        cout<<"max: ";
        cout<<c;
        }
      }
         
      break;

      default:
         cout<<"Error write again !";
      break;

    }
}