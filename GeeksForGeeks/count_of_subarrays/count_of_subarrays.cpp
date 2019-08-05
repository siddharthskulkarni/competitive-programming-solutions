#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long n, k;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		long arr[n], count, i = 0, tot = 0;
		for(long i = 0; i < n; i++) cin >> arr[i];
		while(i < n) {
			if(arr[i] > k) {
			    i++;
			    continue;
			}
			long j = i;
			count = 0;
			while(j < n) {
				if(arr[j] <= k) count++;
				else break;
				j++;
			}
			tot += (count * (count + 1)) / 2;
			i = j;
		}
		cout << (n * (n + 1)) / 2 - tot << "\n";
	}
	return 0;
}