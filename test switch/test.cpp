#include <iostream>
using namespace std;

int main(){
  float input;
  char output;
  
  cout<<"input mark: ";
  cin>>input;

  if(input <0 || input > 100){
    cout << "Invalid mark entered. Please enter a value between 0 and 100.";
  }
  
  output = (input >= 80) ? 
   'A' : 
  (input >= 70 ) ? 
   'B' : 
  (input >= 50) ? 
   'C' : 
  (input >= 46) ? 
   'D' : 
  (input >= 30) ? 
   'E' : 
  (input >= 0) ? 
   'F' : 'w';//default for invalid input
  cout<<"output : Your grade is "<<output;


  switch (output){
   case 'A':
   cout<<" Excellent work!";
   break;
   case 'B':
   cout<<" Well done!";
   break;
   case 'C':
   cout<<" Good job!";
   break;
   case 'D':
   cout<<" You passed, but you could do better";
   break;
   case 'E':
   cout<<" You passed, but you have to work hard";
   break;
   case 'F':
   cout<<" Sorry, you failed";
   break;

   default:
   cout<<"Error type again";
   break;

  }

  if(input > 30 ){
    cout<<" Congratulations! You are eligible for the next level.";
  }
  else{
          cout<<" Please try again next time";
  }


}
