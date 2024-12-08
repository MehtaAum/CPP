#include <iostream>
using namespace std;

//give a point (x,y), write a program to find out if it lies in the 1st quadrant, 2nd quadrant, 3rd quadrant, 4th quadrant, on the x-axis, y-axis or at the origin,viz. (0,0). 

int main(){
  int x, y;

  cout<<"Enter the coordinates x : ";
  cin>>x;  
  cout<<"Enter the coordinates y : ";
  cin>>y;

  //check location of point

  if(x==0 && y ==0){
    cout<<"the point lies at the origin (0,0)"<<endl;
  }
  else if(x == 0){
    cout<<"the point lies at the origin x axis"<<endl;
  }
  else if(y == 0){
    cout<<"the point lies at the origin y axis"<<endl;
  }
  else if(x>0 && y>0){
    cout<<"the point lies at the 1st quadrant"<<endl;
  }
  else if(x<0 && y>0){
    cout<<"the point lies at the 2nd quadrant"<<endl;
  }
  else if(x<0 && y<0){
    cout<<"the point lies at the 3rd quadrant"<<endl;
  }
  else if(x>0 && y<0){
    cout<<"the point lies at the 4th quadrant"<<endl;
  }
  
}