//print 1 to n (without extra parameter)

#include <iostream>
using namespace std;

void print(int n){

if (n == 0) return; //base case (stops when reach 0)
print(n-1); //call (reduce n each time)
cout<<n<<endl; //work (print)

// Explanation:
// - Let's say n = 5. You might expect the output to be "5 4 3 2 1", 
//   but it actually prints "1 2 3 4 5".

// Why?
// - The function keeps calling itself, decreasing n each time.
// - When n reaches 0, the recursion starts returning.
// - As it returns, the remaining statements (in this case it is cout<<n<<endl) execute in reverse order.
// - That’s why it prints 1, then 2, then 3... up to n.

}

int main() {
int n;    
cout<<"enter n :";
cin>>n;

print(n);

}