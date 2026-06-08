// https://www.codechef.com/problems/NO3EQUAL

#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int cnt = 1, ans = 0;
        char curr = s[0];

        for (int i = 1; i < n; i++) {
            if (s[i] == curr)cnt++;
            else {
                ans += cnt / 3;
                cnt = 1;
                curr = s[i];
            }
        }
        if (cnt > 1)ans += cnt / 3;

        cout << ans << endl;
    }

    return 0;
}