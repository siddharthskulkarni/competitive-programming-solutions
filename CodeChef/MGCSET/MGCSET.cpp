#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	for(int i = 0; i < T; i++) {
		int n, m, count = 1, a[30];
		cin >> n >> m;
		for(int i = 0; i < n; i++) {			
			cin >> a[i];
			if(a[i] % m == 0)
				count *= 2;
		}
		count -= 1;
		cout << count << "\n";
	}
	return 0;
}