#include <iostream>
using namespace std;

// Write a Program to find an average mark from a total of three subject marks of a
// student. Each subject’s marks must be given out of 100.
// For example,
// Input:
// Enter maths marks: 90
// Enter english marks: 82
// Enter science marks: 78
// Output:
// Average mark: 83.33

int main (){

float m, e, s, avg;

cout<<"Maths : ";
cin>>m;
cout<<"English : ";
cin>>e;
cout<<"Science : ";
cin>>s;

avg = (m+e+s)/300 *100;

cout<<"Average mark : "<<avg<<endl;


cout<<"Pass/Fail : ";
if(avg<33.33){
    cout<<"( fail )";
}
else{
    cout<<"( pass )";
}

}

