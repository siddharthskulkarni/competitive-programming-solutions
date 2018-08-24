#include <bits/stdc++.h>
using namespace std;

int neural_net(int count, long w[], long b[],int x, int N) {
	if(count == N) 
		return x;
	if(x % 2 == 0) {
		if(b[count] % 2 == 0) {
			count ++;
			neural_net(count, w, b, 0, N);
		}
		else {
			count ++;
			neural_net(count, w, b, 1, N);
		}
	}
	else {
		if(w[count] % 2 == 0) {
			if(b[count] % 2 == 0) {
				count ++;
				neural_net(count, w, b, 0, N);
			}
			else {
				count ++;
				neural_net(count, w, b, 1, N);
			}
		}
		else {
			if(b[count] % 2 == 0) {
				count ++;
				neural_net(count, w, b, 1, N);
			} 
			else {
				count ++;
			neural_net(count, w, b, 0, N);
			}
		}
	}
}

int main() {
	int T;
	cin >> T;
	for(int i = 0; i < T; i++) {
		long w[100000], b[100000], minx, maxx, cnt_spam = 0;
		int N;
		cin >> N >> minx >> maxx;
		for (int j = 0; j < N; j++) 
			cin >> w[i] >> b[i];
		int even, odd;
		even = neural_net(0, w, b, 0, N);
		odd = neural_net(0, w, b, 1, N);
		cout << odd << " " << even;
		/*for(int x = minx; x <= maxx; x++) {
			if(x % 2 != 0)
				if(odd % 2 != 0)
					cnt_spam ++;
			else
				if(even % 2 != 0)
					cnt_spam ++;
		}
		cout << maxx - cnt_spam << " " << cnt_spam << "\n";*/
	}
	return 0;
}