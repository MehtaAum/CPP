#include <iostream>
using namespace std;

//find the index of a specific element .

int main(){

  int size, num = 0, ans;

  cout<<"SIZE OF ARRAY = ";
  cin>>size;


  int a[size];

  for (int i = 0; i < size; i++)
  {
    cout<<"a["<<i<<"]"<<" = ";
    cin>>a[i];
  }
  
    cout<<"enter the element to find index : ";
    cin>>num;


  for (int i = 0; i < size; i++)
  {
    if (a[i] == num)
    {
      ans = i;
    }
    
  }
  
  cout<<ans;
  

 

}
