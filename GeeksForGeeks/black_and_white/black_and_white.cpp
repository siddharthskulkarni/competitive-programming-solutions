#include<bits/stdc++.h>
using namespace std;


int check_move(long n, long m, long i, long j) {
	int count = 0;
	if(i + 2 <= n && j + 1 <= m) count++;
	if(i + 2 <= n && j - 1 >= 1) count++;
	if(i - 2 >= 1 && j + 1 <= m) count++;
	if(i - 2 >= 1 && j - 1 >= 1) count++;
	if(j + 2 <= m && i + 1 <= n) count++;
	if(j + 2 <= m && i - 1 >= 1) count++;
	if(j - 2 >= 1 && i + 1 <= n) count++;
	if(j - 2 >= 1 && i - 1 >= 1) count++;
	return count;
}


/*long moves(long n, long m, long ptrn, long ptrm) {
	
}*/


int main() {
	int t;
	long n, m, count;
	cin >> t;
	while(t--) {
	    count = 0;
		cin >> n >> m;
		for(long i = 1; i <= n; i++) {
			for(long j = 1; j <= m; j++) {
				count += (n * m) - check_move(n, m, i, j) - 1;
			}
		}
		cout << count << "\n";
	}
	return 0;
}