#include <iostream>
using namespace std;

//if cost price  and selling price of an item is input through keyboard, write a program to determine whether the seller make a profit or incurred loss or no profit no loss. also determine how much profit he made or loss he incurred.

int main(){
  int cp,sp;

  cout<<"Cost price : ";
  cin>>cp;
  cout<<"Selling price : ";
  cin>>sp;
  
  if(cp < sp){
    cout<<"profit : ";
    cout<<sp-cp;
  }
  else if(cp == sp){
    cout<<"no profit, no loss : ";
    cout<<sp-cp;
  }
  else{
    cout<<"loss : ";
    cout<<cp-sp;
  }

}