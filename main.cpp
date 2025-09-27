#include <iostream>
#include <time.h>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
    srand(time(0));
    const int n = 4, m = 2;
    int A[n][m];
    cout << "Array A with " << n << " rows and " << m << " columns:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Row " << i << ":";
        for (int j = 0; j < m; j++) {
            cout << "   Column " << j << ":";
            A[i][j] = rand() % 100 + 1;
            cout << setw(4) << A[i][j];
        }
        cout << endl;
    }

    int a;
    cout << endl << "Enter number random:" << endl;
    int B[m];
    cin >> a;
    int c = 0;
    cout << "----------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        memset(B, 0, sizeof(B));
        int j;
        for (j = 0; j < m; j++) {
            if (A[i][j] % 2 == 0) {
                B[j] = A[i][j];
            }else{
                memset(B, 0, sizeof(B));
                break;
            }
        }

        if (j == m) {
            for (int j = 0; j < m; j++) {
                cout << B[j] << " ";
            }
            cout << "   " << "Row index: " << c;
            cout << endl;
        }
        c++;
    }



}





// for (int i = 0; i < n; i++) {
//     bool allDivisible = true;
//     for (int j = 0; j < m; j++) {
//         if (A[i][j] % a != 0) {
//             allDivisible = false;
//             break;
//         }
//     }
//
//     if (allDivisible) {
//         for (int j = 0; j < m; j++) {
//             cout << setw(4) << A[i][j];
//         }
//         cout << endl;
//     }
// }