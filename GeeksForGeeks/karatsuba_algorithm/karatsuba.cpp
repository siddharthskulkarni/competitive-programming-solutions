#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long n1, n2;
	string s1, s2;
	cin >> t;
	cin.ignore();
	while(t--) {
		n1 = 0;
		n2 = 0;
		cin >> s1;
		cin >> s2;
		for(int i = s1.length() - 1; i >= 0 ; i--) {
			if(s1[i] == '1') n1 += pow(2, s1.length() - 1 - i);
		}
		for(int i = s2.length() - 1; i >= 0 ; i--) {
			if(s2[i] == '1') n2 += pow(2, s2.length() - 1 - i);
		}
		cout << n1 * n2 << "\n";
	}
	return 0;
}