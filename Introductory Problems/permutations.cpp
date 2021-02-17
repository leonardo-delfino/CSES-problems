#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    ll n; cin >> n;
    string str;

    if (n < 4 && n > 1) {
        cout << "NO SOLUTION";
        return;
    }
    for (int i = 1; i <= n; ++i) {
        if (i & 1) {
            str += to_string(i) + " ";
        }
        else {
            cout << i << " ";
        }
    }
    cout << str << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
