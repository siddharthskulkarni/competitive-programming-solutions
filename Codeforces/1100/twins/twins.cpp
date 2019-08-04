#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n], prefix[n], res = n;
	for(int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	prefix[0] = arr[0];
	for(int i = 1; i < n; i++) prefix[i] = prefix[i - 1] + arr[i];
	for(int i = n - 1; i > 0; i--) {
		if(prefix[n - 1] - prefix[i] + arr[i] > prefix[i - 1]) {
			res = n - i;
			break;
		}
	}
	cout << res << "\n";
	return 0;
}