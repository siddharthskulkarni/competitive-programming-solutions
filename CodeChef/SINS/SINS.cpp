#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        long x, y, res = 0;
        cin >> x >> y;
        res = __gcd(x, y);
        cout << 2 * res << "\n";
    }
    return 0;
} 