#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    ll row, col;
    cin >> row >> col;

    // cannot use "pow" in the cout,
    // a possible output could be 8.89345e+17 when the correct one should be 889344699930098742
    if (col <= row) {
        if (row & 1) {
            row--;
            cout << row * row + col << "\n";
        }
        else {
            cout << row * row - col + 1 << "\n";
        }
    }
    else {
        if (col & 1) {
            cout << col * col - row + 1 << "\n";
        }
        else {
            col--;
            cout << col * col + row << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
