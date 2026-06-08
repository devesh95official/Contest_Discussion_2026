// https://www.codechef.com/problems/RVBS

#include <bits/stdc++.h>

using namespace std;

int main() {

    int t1;
    cin >> t1;
    while (t1--) {
        int n;
        cin >> n;
        // input
        string s, t;
        cin >> s >> t;
        // store positions of 1
        vector<int> a, b;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1')a.push_back(i);
            if (t[i] == '1')b.push_back(i);
        }
        if (a.size() != b.size())cout << "-1\n";
        else {
            int cnt = 0;
            for (int i = 0; i < a.size(); i++) {
                if (a[i] != b[i])cnt++;
            }
            cout << cnt << endl;
        }
    }

    return 0;
}