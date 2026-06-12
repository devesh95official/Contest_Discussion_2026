// https://www.codechef.com/problems/EQBEND

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

      int ans = INT_MAX;

      map<int, pair<int, int>> mp; // key {1,{0,3}}

      for (int i = 0; i < n; i++) {
         if (mp.find(v[i]) == mp.end())mp[v[i]].first = i,mp[v[i]].second = i;
         else mp[v[i]].second = i;
         }

      for (auto x : mp) {
         pair<int, int> p = x.second;
         if (p.first != p.second) {
            ans = min(ans, p.first + n - p.second - 1);
         }
      }
      if (ans == INT_MAX)cout << "-1\n";
      else cout << ans << endl;
   }

   return 0;
}