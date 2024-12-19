#include <iostream>
using namespace std;

// Write a Program to perform the addition operation of two 1D arrays & store it in
// another array. Keep in mind that both array sizes must be the same.
// For example,
// Input:
// Enter array size: 5

// Enter array A's elements:
// a[0] = 7
// a[1] = 4
// a[2] = 9
// a[3] = 5
// a[4] = 2

// Enter array B's elements:
// b[0] = 1
// b[1] = 3
// b[2] = 1
// b[3] = 7
// b[4] = 3

// Output:
// Array C is: 8, 7, 10, 12, 5

int main(){

 int size;
 cout<<endl<<"size of array : "; cin>>size;

 int a[size], b[size], c[size] ;

cout<<endl<<"--array a--"<<endl<<endl;


 for (int i = 0; i < size; i++)
 {
    cout<< "a["<<i<<"]"<< " = ";
    cin>>a[i];
 }

 cout<<endl<<"---------------------------------------------"<<endl;

cout<<endl<<"--array b--"<<endl<<endl;

  for (int i = 0; i < size; i++)
 {
    cout<< "a["<<i<<"]"<< " = ";
    cin>>b[i];
 }

cout<<endl<<"--array c--"<<endl<<endl;


  for (int i = 0; i < size; i++)
 {
    cout<< "a["<<i<<"]"<< " = ";
    
    c[i] = a[i] + b[i];



    cout<<c[i]<<endl;
 }
 



}