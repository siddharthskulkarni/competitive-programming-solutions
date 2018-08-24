#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        long a[100000];
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        long res = 1e18;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                res = min(res, (a[i] * a[j]) / __gcd(a[i], a[j]));
            }
        }
        cout << res << "\n";
    }
    return 0;
} 