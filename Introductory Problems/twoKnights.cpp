#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        ll allPositions = i * i, ans = allPositions * (allPositions - 1) / 2;
        if (i > 2) {
            ans -= 4 * (i - 1) * (i - 2);
        }
        cout << ans << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
