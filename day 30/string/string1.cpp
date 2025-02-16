#include <iostream>
using namespace std;

int main() {

string s;
// cin>>s; // why i dont use cin in string coz it not consider space example : cin>>s; if i write aum mehta it output look like aum only coz so, for that i write getline.
getline(cin,s);
cout<<s;    
}