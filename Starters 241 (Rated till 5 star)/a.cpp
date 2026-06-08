//https://www.codechef.com/problems/RUNCHASE

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	n++;
	
	//cout<< (n+19)/20<<endl;
	cout<< n/20 + (n%20!=0);
    
    return 0;
}
