// https://codeforces.com/contest/2233/problem/A

#include <bits/stdc++.h>

using namespace std;

int int_ceil(int x, int d) {
    return (x + d - 1) / d;
}

void solve() {
    int n, x, y, t;
    cin >> n >> x >> y >> t;
    int ans = int_ceil(n, x + y);
    if (t * x <= n) {
        ans = min(ans, int_ceil(n - t * x, x + 10 * y) + t);
    }
    cout << ans << '\n';
}

int main() {

    int t;
    cin >> t;
    while (t--)solve();

    return 0;
}