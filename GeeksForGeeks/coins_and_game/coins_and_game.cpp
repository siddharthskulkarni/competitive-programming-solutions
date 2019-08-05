#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	long long n;
	long k, temp;
	while(t--) {
		cin >> n >> k;
		if(k % 2 == 0) temp = k / 2 - 1;
		else temp = k / 2;
    	cout << n - temp << " ";
    	for(int i = 1; i < k; i++) {
    	    if(i % 2 != 0) cout << 0 << " ";
    	    else cout << 1 << " ";
     	}
     	cout << "\n";
	}
	return 0;
}