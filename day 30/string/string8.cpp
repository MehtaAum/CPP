//input a string of even length and reverse the first half of the string

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    string s = "duniya";
    int n = s.size();

    cout<<s<<endl;

    reverse(s.begin() , s.begin() + n/2);

    cout<<s;

}