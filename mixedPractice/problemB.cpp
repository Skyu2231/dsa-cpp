#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[100000];
        int j = 0;
        int zeros = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] == 0)
                zeros++;
            else
                a[j++] = a[i];
        }

        while (zeros > 0) {
            a[j++] = 0;
            zeros--;
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
