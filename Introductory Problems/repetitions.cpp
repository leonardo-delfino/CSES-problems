#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

void solve() {
    string str;
    cin >> str;

    long strLen = str.length();
    long counter = 0, currentCounter = 1;
    for (int i = 0; i < strLen; i++) {
        if (i < strLen - 1 && str[i] == str[i + 1]) {
            currentCounter++;
        }
        else {
            if (currentCounter > counter) {
                counter = currentCounter;
            }
            currentCounter = 1;
        }
    }
    cout << counter << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
