#include <iostream>
using namespace std;

class car{
public:    
   string name;
   int price;
   int speed;

};

int main(){

  car audi, mustang, bmw;

  audi.name = "audi";
  audi.price = 500000;
  audi.speed = 100;

  mustang.name = "mustang";
  mustang.price = 10000000;
  mustang.speed = 230;

  bmw.name = "bmw";
  bmw.price = 12000000;
  bmw.speed = 260;    

  cout<<"Name : "<<audi.name<<"  "<<"Price : "<<audi.price<<"  "<<"MaxSpeed : "<<audi.speed<<"  "<<endl;
  cout<<"Name : "<<mustang.name<<"  "<<"Price : "<<mustang.price<<"  "<<"MaxSpeed : "<<mustang.speed<<"  "<<endl;
  cout<<"Name : "<<bmw.name<<"  "<<"Price : "<<bmw.price<<"  "<<"MaxSpeed : "<<bmw.speed<<"  "<<endl;

  

  
  
  


}