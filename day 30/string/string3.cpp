//input a string and count all vowels in the given string

#include <iostream>
using namespace std;

int main(){
    
    string s = "hello my name is aum";
    int count = 0;  

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
        
    }
    cout<<count<<endl;
}