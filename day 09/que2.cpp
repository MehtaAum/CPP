#include <iostream>
using namespace std;
//write the digit like this if 203 so total digit is 3 so count digit based on input.
int main(){
  int input, count = 0;

  cout<<"Enter a number : ";
  cin>>input;

  if(input < 0){ // for if number is negative
    input = -input;
  }
  
  while (input > 0)
  {
    input = input / 10; // it divide number until 0
    count++; // count how many times loop is going so we can find the total number of divide and give total.
  }
  cout<<"total number of digits : "<<count;
 
}