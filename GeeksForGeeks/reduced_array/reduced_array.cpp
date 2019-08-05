#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n, temp, val, ptr;
	cin >> t;
	while(t--) {
		val = 0, ptr = 0;
		cin >> n;
		pair<int, int> arr[n];
		for(int i = 0; i < n; i++) {
			cin >> temp;
			arr[i] = make_pair(temp, i);
		}
		sort(arr, arr + n);
		for(int i = 0; i < n; i++) arr[arr[i].second] = i;
		for(int i = 0; i < n; i++) cout << arr[i].first << " ";
		cout << "\n";
	}
	return 0;
}