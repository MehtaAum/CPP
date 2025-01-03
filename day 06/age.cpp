#include <iostream>
using namespace std;

//if the ages of ram, shyam and ajay are input through keyboard, write a program to determine the youngest of the three.

int main(){
  int ram, shyam, ajay;

  cout<<"ram : "; cin>>ram;
  cout<<"shyam : "; cin>>shyam;
  cout<<"ajay : "; cin>>ajay;

  cout<<endl;

if(ram == shyam && ram == ajay && shyam == ajay  ){
  cout<<"All are same age";
}

else{
if(ram > shyam){
    if(ram > ajay){
        cout<<"ram is youngest";
    }
    else{
        cout<<"ajay is youngest";       
    }
  }
  else{
    if(shyam > ajay){
        cout<<"shyam is youngest";
    }
    else{
        cout<<"ajay is youngest";        
    }
  }
}

  


  


  

  
}