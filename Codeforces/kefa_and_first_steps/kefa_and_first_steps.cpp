#include<bits/stdc++.h>
using namespace std;

int main() {
	long n, res = 1, temp = 1;
	cin >> n;
	long long arr[n];
	for(long i = 0; i < n; i++) cin >> arr[i];
	for(long i = 1; i < n; i++) {
		if(arr[i] >= arr[i - 1]) temp++;
		else temp = 1;
		if(temp > res) res = temp;
	}
	cout << res << "\n";
	return 0;
}