//reverse string

#include <iostream>
// #include <algorithm> //include this for reverse
#include <bits/stdc++.h> //it include almost all standard library headers

using namespace std;

int main() {

    string s = "aum";
    cout<<s<<endl;
    
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}