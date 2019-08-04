#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m, min_diff;
	cin >> n >> m;
	int f[m];
	for(int i = 0; i < m; i++) cin >> f[i];
	sort(f, f + m);
	min_diff = f[m - 1] - f[0];
	for(int i = 0; i < m - n + 1; i++) {
		if(f[i + n - 1] - f[i] < min_diff) min_diff = f[i + n - 1] - f[i];
	}
	cout << min_diff << "\n";
	return 0;
}