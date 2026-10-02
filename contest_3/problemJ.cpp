#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int matrix[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }


    for (int i = r - 1; i >= 0; i--) {
        if (matrix[i][0] == -1)
            return 0;

        cout << matrix[i][0] << " ";
    }


    for (int j = 1; j < c; j++) {
        if (matrix[0][j] == -1)
            return 0;

        cout << matrix[0][j] << " ";
    }


    for (int i = 1; i < r; i++) {
        if (matrix[i][c - 1] == -1)
            return 0;

        cout << matrix[i][c - 1] << " ";
    }

    for (int j = c - 2; j >= 1; j--) {
        if (matrix[r - 1][j] == -1)
            return 0;

        cout << matrix[r - 1][j] << " ";
    }
    cout<<endl;
}
