#include <iostream>
using namespace std;

class fullstack{
public:
    string name;    
    string tech;
    int placement;
    int salary;
  
  void call(string x,string a, int b, int c){

    name = x;
    tech = a;
    placement = b;
    salary = c;

    cout<<"Name : "<<name<<"  "<<"Tech : "<<tech<<"  "<<"Placement : "<<placement<<"  "<<"salary : "<<salary<<endl;
  }

};

int main(){

    fullstack aum, harsh, alok;

    aum.call("aum","assembly",80,40000);
    harsh.call("harsh","c++",60,50000);
    alok.call("alok","java",90,15000);

}