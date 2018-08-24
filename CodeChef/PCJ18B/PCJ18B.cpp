#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		int n;
		cin >> n;
		int cnt = 0;
		for(int j = 1; j <= n; j += 2) {
			cnt += (n + 1 - j) * (n + 1 - j);
		} 
		cout << cnt << "\n";
	}
	return 0;
}