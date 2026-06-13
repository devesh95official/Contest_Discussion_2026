// https://codeforces.com/contest/2236/problem/B

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> count(k, 0);
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            count[i % k]++;
        }
    }
    bool possible = true;
    for (int i = 0; i < k; i++){
        if (count[i] % 2 != 0) {
            possible = false;
            break;
        }
    }
    if (possible) {
        cout << "YES\n";
    } 
    else {
        cout << "NO\n";
    }
}

int main() {

    int t;
    cin >> t;
    while (t--)solve();

    return 0;
}