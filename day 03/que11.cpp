#include <iostream>
using namespace std;

// Q.2 Gross Salary Calculator
// Create a program that calculates the gross salary by adding percentages of HRA, DA, and TA to
// the base salary as chosen by the user.

int main (){
 
 int base, gross;
 float  hra, da, ta;

 cout<<"Base salary : ";
 cin>>base;
 cout<<"HRA : ";
 cin>>hra;
 cout<<"DA : ";
 cin>>da;
 cout<<"TA : ";
 cin>>ta;

 hra = (hra/100) * base  ;
 da = (da/100) * base  ;
 ta = (ta/100) * base  ;

 gross = base + hra + da + ta ;

 cout<<"Gross salary : "<<gross;

}