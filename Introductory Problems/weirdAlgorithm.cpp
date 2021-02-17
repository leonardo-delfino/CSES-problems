#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n;
    cin >> n;

    while (n > 1) {
        cout << n << " ";
        // it is positive, so I can use the bitwise and
        if (n & 1) {
            n = n * 3 + 1;
        }
        else {
            n /= 2;
        }
    }
    cout << 1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
