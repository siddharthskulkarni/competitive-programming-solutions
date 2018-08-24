#include <bits/stdc++.h>
#define AND &&
#define OR ||
using namespace std;

long euclids_gcd(long a, long b) {
	if(a == 0)
		return b;
	return euclids_gcd(b % a, a);
}

double find_numd(double a, int n) {
	float numd;
	numd = (360 * n - 720 - 2 * a * n);
	return numd;
}

double find_dend(double a, int n) {
	float dend;
	dend = (n - 1) * n;
	return dend;
}

double find_kth_num(double a, int k, double dend, double numd) {
	return a * dend + (k - 1) * numd;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		double a;
		cin >> n >> a >> k;
		long numd = find_numd(a, n), dend = find_dend(a, n), gcd = euclids_gcd(find_kth_num(a, k, dend, numd), dend);
		cout << (int)(find_kth_num(a, k, dend, numd) / gcd) << " " << (int)(dend / gcd) << "\n";
	}
}