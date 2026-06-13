// https://codeforces.com/contest/2236/problem/A

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int min_h = INT_MAX;
    int max_h = INT_MIN;

    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        min_h = min(min_h, h);
        max_h = max(max_h, h);
    }

    cout << max_h - min_h + 1 << endl;
}

int main() {

    int t;
    cin >> t;
    while (t--)solve();

    return 0;
}