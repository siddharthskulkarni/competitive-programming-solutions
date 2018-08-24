#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	for(int i = 0; i < T; i++) {
		int N;
		cin >> N;
		cout << "1 1";
		for(int j = 0; j < N / 2; j++) 
			cout << "0";
		cout << "\n";
	} 
	return 0;
}