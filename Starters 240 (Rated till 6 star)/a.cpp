// https://www.codechef.com/problems/POINTT

#include <bits/stdc++.h>

using namespace std;

int main() {
   
   int x , y, a , b;
   cin >> x >> y >> a >> b;

   if (x > a || (x == a && y >= b)) {
      cout << "ALICE" << endl;
   }
   else {
      cout << "BOB" << endl;
   }
   return 0;
}
