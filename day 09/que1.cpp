#include <iostream>
using namespace std;
//print a to z but skip every 3 numbers like these a,e,i,m..
int main(){
  char a;

  for (char a = 'a'; a <= 'z'; a+=4)
  {
    cout<<a <<" ";
  }
  
}