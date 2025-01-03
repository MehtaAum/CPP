
//print diagonal custom pattern.
// *     *
//    *  
// *     *


//this program is in currently building stage !!

#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows (can be adjusted)

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Check if it's a diagonal or anti-diagonal
            if (j == i || j == n - i + 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
