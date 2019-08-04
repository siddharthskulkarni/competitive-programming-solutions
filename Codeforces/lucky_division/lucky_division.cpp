#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	cin >> n;
	for(int i = 0; i < 14; i++) {
		if(n % arr[i] == 0) goto label;
	}
	cout << "NO\n";
	return 0;
	label:
	cout << "YES\n";
	return 0;
}