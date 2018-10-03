#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        long cnt = 0;
        while(n > 0) {
            cnt += n / 5;
            n /= 5;
        }
        cout << cnt << "\n";
    }
}