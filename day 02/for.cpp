#include <iostream>
using namespace std;

int main() {
// Write a program in C++ to swap two numbers.
// Sample Output:

int a, b;

cout<<"Input 1st number : ";
cin>>a;

cout<<"Input 2nd number : ";
cin>>b;

// output swap

a = a+b;
b = a-b;
a = a-b;

cout<<"swap a = "<<a<<endl<<"swap b = "<<b;
}