#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;

    while (Q--) {
        int T;
        int64 L, R;
        cin >> T >> L >> R;

        if (L > R) {
            cout << 0 << '\n';
            continue;
        }

        int64 ans;

        if (T == 1) {
            // (L, R)
            ans = max<int64>(0, R - L - 1);
        }
        else if (T == 2) {
            // [L, R)
            ans = R - L;
        }
        else if (T == 3) {
            // (L, R]
            ans = R - L;
        }
        else {
            // [L, R]
            ans = R - L + 1;
        }

        cout << ans << '\n';
    }

    return 0;
}

