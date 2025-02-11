//print 1 to n
//12345
#include <iostream>
using namespace std;

void print(int n,int b){
if (b == n+1) return;
cout<<b<<endl;
print(n,b+1);


}

int main() {
int n,b = 1;    
cout<<"enter n :";
cin>>n;

print(n,b);

}