#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[100000];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int k = 0;

        for (int i = 1; i < n; i++) {
            if (a[i] < a[k]) {
                k = i;
            }
        }

        cout << k << endl;
    }

    return 0;
}
