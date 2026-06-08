// https://www.codechef.com/problems/SUMREDUCTION

#include <bits/stdc++.h>

using namespace std;

#define int long long int

int32_t main() {

    int t;
    cin >> t;
    while (t--) {
        int n, sum = 0, oor = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            sum += a;
            oor |= a;
        }
        if (sum == oor)cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}