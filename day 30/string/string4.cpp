//input a string and update all the even positions in the string to character 'a'. consider 0 based indexing.

#include <iostream>
using namespace std;

int main() {

    string s;
    cout<<"enter string : ";
    getline(cin,s);
    cout<<s<<endl;

    for (size_t i = 0; i < s.size(); i++)
    {
        if(i % 2 == 0){
           s[i] = 'a';
        }
    }
    cout<<s<<endl;
    
}