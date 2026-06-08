// https://www.codechef.com/problems/CYCYC

#include <bits/stdc++.h>

using namespace std;

#define int long long int

int32_t main() {

   int t; // testcases
   cin >> t;
   while (t--) {
      // input per testcase
      int n;
      cin >> n;
      vector<int> v(n);
      for (int i = 0; i < n; i++) {
         cin >> v[i];
      }

      sort(v.begin(), v.end());

      if (v[0] == v[1])cout << "YES\n";
      else cout << "NO\n";

   }

   return 0;
}