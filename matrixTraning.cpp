#include <iostream>
#include <iomanip>
using namespace std;

main() {
    int n;
    cin >> n;

    int matrix[n][n];
    int counter = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
                if (counter % 2 != 0)
                    matrix[i][j] = 0;
                else
                    matrix[i][j] = j;
                counter ++;
                cout <<left << setw(4) << matrix[i][j];
        }
        cout << "\n";
    }
    cout << "=======================\n";

    for (int j = 0; j < n; j++){
        for (int i = n - 1; i >= 0; i--) {
            cout <<left << setw(4) << matrix[i][j];
        }
        cout << "\n";

    }

}
