	#include<bits/stdc++.h>
	using namespace std; 


	long cnt;


	void cnt_subsets(bool **dp, long arr[], long i, long j, long n) {
		if(i == 0 && j != 0 && dp[0][j]) {
			cnt++;
			return;
		}
		if(i == 0 && j == 0) {
			cnt++;
			return;
		}
		if(dp[i - 1][j]) cnt_subsets(dp, arr, i - 1, j, n);
		if(j >= arr[i] && dp[i - 1][j - arr[i]]) cnt_subsets(dp, arr, i - 1, j - arr[i], n);
		return;
	}


	int main() {
		long t, n, k;
		cin >> t;
		while(t--) {
			cnt = 0;
			cin >> n;
			long arr[n];
			for(long i = 0; i < n; i++) cin >> arr[i];
			cin >> k;
			bool **dp;
			dp = new bool *[n];
			for(long i = 0; i < n; i++) dp[i] = new bool [k + 1];
			for(long j = 0; j <= k; j++) {
				if(j == arr[0]) dp[0][j] = true;
				else dp[0][j] = false;
			}
			dp[0][0] = true;
			for(long i = 1; i < n; i++) {
				for(long j = 0; j <= k; j++) {
					if(dp[i - 1][j] || j == arr[i] || (j > arr[i] && dp[i - 1][j - arr[i]])) dp[i][j] = true;
					else dp[i][j] = false;
				}
			}
			cnt_subsets(dp, arr, n - 1, k, n);
			delete dp;
			cout << cnt << "\n";
		}
		return 0;
	}