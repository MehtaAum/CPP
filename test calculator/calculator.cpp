// Q.1 Calculator
// Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
// using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
// is pressed.

#include <iostream>
using namespace std;

void add(int x ,int y){
  cout<<"Addition of "<<x<<" and "<<y<<" is : "<<x+y<<endl;
}
void min(int x ,int y){
  cout<<"Subtraction of "<<x<<" and "<<y<<" is : "<<x-y<<endl;
}
void multi(int x ,int y){
  cout<<"Multiplication of "<<x<<" and "<<y<<" is : "<<x*y<<endl;
}
void division(float x ,float y){
    if (y == 0)// if user type 0 then.
    {
      cout<<"Cannot divide by 0 !"<<endl;       
    }
    else{
      cout<<"Division of "<<x<<" and "<<y<<" is : "<<x/y<<endl;
    }  
}
void mod(int x ,int y){
  cout<<"Module of "<<x<<" and "<<y<<" is : "<<x%y<<endl;
}


int main(){

int user, x, y;

do
{
cout<<"-----------------------------------------------"<<endl;    
cout<<"press 1 : + "<<endl;
cout<<"press 2 : - "<<endl;
cout<<"press 3 : * "<<endl;
cout<<"press 4 : / "<<endl;
cout<<"press 5 : % "<<endl;
cout<<"press 0 : exit "<<endl;
cout<<"-----------------------------------------------"<<endl;

cout<<"Enter your choice : ";
cin>>user;



 switch(user){
    case 1:
        cout<<"Enter your first number : ";    cin>>x;
        cout<<"Enter your second number : ";   cin>>y;
        add(x,y);
      break;
      
    case 2:
        cout<<"Enter your first number : ";    cin>>x;
        cout<<"Enter your second number : ";   cin>>y;
        min(x,y);
      break;
    case 3:
        cout<<"Enter your first number : ";    cin>>x;
        cout<<"Enter your second number : ";   cin>>y;
        multi(x,y);
      break;
    case 4:
        cout<<"Enter your first number : ";    cin>>x;
        cout<<"Enter your second number : ";   cin>>y;
        division(x,y);
      break;
    case 5:
        cout<<"Enter your first number : ";    cin>>x;
        cout<<"Enter your second number : ";   cin>>y;
        mod(x,y);
      break;
    case 0:
        cout<<endl<<endl<<"------------------------- EXITED -------------------------"<<endl<<endl;
      break;                     

    default:
        cout<<endl<<endl<<"INVALID! CHOOSE BETWEEN (1 TO 5)."<<endl;
        cout<<"FOR EXIT PRESS 0."<<endl<<endl;
    break;  
 }

} while (user != 0);
    

}


