#include <iostream>
using namespace std;

//find 5 min no. using nested.

int main (){

 int a,b,c,d,e;
 
 cout<<"A : ";
 cin>>a;
 cout<<"B : ";
 cin>>b;
 cout<<"C : ";
 cin>>c;
 cout<<"D : ";
 cin>>d;
 cout<<"E : ";
 cin>>e;

if (a < b){
    if (a < c){
         if(a < d){
            if(a < e){
                cout<<a;
            }
            else{
                cout<<e;
            }
         }
         else{
            cout<<d;
         }
    }
    else{
        cout<<c;
    }
}


else{
    if(c < d){
        if(c < b){
            if(c < e){
                 cout<<c;
            }
            else{
                if(e < d){
                    if(e < b){
                         cout<<e;
                    }
                    else{
                        cout<<e;
                    }
                }
            }
        }
        else{
                if(b < d){
                   cout<<b; 
                }
                else{
                    cout<<d;
                }
            }
    }
    else{
        cout<<d;
    }
}

}

