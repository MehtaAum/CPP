#include <iostream>
using namespace std;

//give the length and breadth of a rectangle write a program to find whether the area of the rectangle is greater than its perimeter.

int main(){
  int l,b,area,perimeter;

  cout<<"Length of rectangle : ";
  cin>>l;
  cout<<"Breadth of rectangle : ";
  cin>>b;

  area = l*b;
    cout<<"area : ";
    cout<<area;

  perimeter = 2*(l + b);cout<<endl;
  
  cout<<"perimeter : ";
  cout<<perimeter<<endl;

  if(area > perimeter){
    cout<<"area is greater than perimeter : ";
    cout<<area;

  }
  else{
    cout<<"perimeter is greater than area : ";
    cout<<perimeter;
  }

  

}