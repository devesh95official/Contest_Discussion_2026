// https://www.codechef.com/problems/EZSPK

#include <bits/stdc++.h>

using namespace std;

int main() {

   int t;
   cin >> t;

   while (t--) {
      int n;
      string s;
      cin >> n >> s;
      string ans = "NO\n";
      for (int i = 0; i < n - 3; i++) {
         bool f = true;
         for (int j = i; j <= i + 3; j++) {
            if ((s[j] == 'a' || s[j] == 'i' || s[j] == 'o' || s[j] == 'e' || s[j] == 'u'))f = false;
         }
         if (f)ans = "YES\n";
      }

      cout << ans;
   }

   return 0;
}