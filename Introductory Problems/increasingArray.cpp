#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int size;
    cin >> size;
    long movesArr[size];
    long moves = 0;

    for (int i = 0; i < size; ++i) {
        cin >> movesArr[i];
        if (i > 0) {
            while (movesArr[i] < movesArr[i - 1]) {
                movesArr[i]++;
                moves++;
            }
        }
    }
    cout << moves << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
