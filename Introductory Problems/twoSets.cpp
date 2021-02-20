#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;
    if (n < 2 || sum & 1) {
        cout << "NO";
        return;
    }
    cout << "YES" << "\n";

    vector<ll> numbers, otherNumbers;
    ll halfSum = sum / 2, res = 0;
    for (int i = n; i > 0; i--) {
        if (res + i > halfSum) {
            otherNumbers.push_back(i);
            continue;
        }
        else {
            numbers.push_back(i);
            res += i;
        }
    }

    cout << numbers.size() << "\n";
    for (auto i : numbers) {
        cout << i << " ";
    }
    cout << "\n";
    cout << otherNumbers.size() << "\n";
    for (auto i : otherNumbers) {
        cout << i << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
