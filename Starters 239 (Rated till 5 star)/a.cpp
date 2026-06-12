// https://www.codechef.com/problems/TOURPLAN

#include <bits/stdc++.h>

using namespace std;

int main() {
   // input
   int x, y, z;
   cin >> x >> y >> z;

   if (z <= 50) {
      cout << x << endl;
   }
   else {
      cout << x + (z - 50)*y << endl;
   }

   return 0;
}