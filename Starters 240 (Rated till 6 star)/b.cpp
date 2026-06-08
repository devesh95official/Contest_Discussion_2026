// https://www.codechef.com/problems/COUNTAB?tab=statement

#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, a = 0, b = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a')a++;
            else b++;
        }
        cout << a << " " << b << endl;
    }

    return 0;
}