
//print rows and cols that user say and make custom pattern printing.

#include <iostream>
using namespace std;

int main(){
    int r,c;

    cout<<"row : ";
    cin>>r;
    cout<<"col : ";
    cin>>c;

    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < c; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
}