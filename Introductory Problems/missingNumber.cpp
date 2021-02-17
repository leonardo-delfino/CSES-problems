#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    ll n, sum = 0;
    cin >> n;

    for (ll i = 0; i < n - 1; ++i) {
        ll tmp;
        cin >> tmp;
        sum += tmp;
    }

    cout << (n * (n + 1) / 2) - sum << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
