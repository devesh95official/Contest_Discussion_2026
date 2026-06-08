//https://www.codechef.com/problems/EVENSUM1

#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int sum = 0;
        bool even_hai = false;
        for (int i = 0; i < n; i++) {
            sum += v[i];
            if (v[i] % 2 == 0)even_hai = true;
        }

        if (sum % 2 != 0)cout << "YES\n";
        else if (even_hai)cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}