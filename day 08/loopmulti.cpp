#include <iostream>
using namespace std;
// Write a Program to print the Fibonacci series up to N numbers using a for loop.
//like multiplication table
int main()
{

    int start,first, end = 10, a = 1, ans;

    cout << "input : ";
    cin >> first;

    for (start = 1; start <= end; start++)
    {
        ans = first * start;
        cout<<ans<<endl;
    }
}