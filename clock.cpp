#include <bits/stdc++.h>

using namespace std;

bool check(int x, int y, int n) {
    int result = (int)(pow(x, y) * y + pow(y, x) * x);
    return result == n;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool found = false;
        for (int x = 1; x <= n; x++) {
            for (int y = 1; y <= n; y++) {
                if (check(x, y, n)) {
                    cout << x << " " << y << endl;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        if (!found) cout << -1 << endl;
    }

    return 0;
}