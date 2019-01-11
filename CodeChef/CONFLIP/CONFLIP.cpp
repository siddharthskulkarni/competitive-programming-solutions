#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int g, i, q;
        long long n;
        cin >> g;
        for(int j = 0; j < g; j++) {    
            cin >> i >> n >> q;
            long long cnt1 = 0, cnt2 = 0;
            if(i == 1)
                cnt1 = n;
            else
                cnt2 = n;
            if(n % 2 == 0)
                cnt1 = cnt2 = n / 2;
            else {
                if(i == 1) {
                    cnt1 = n / 2;
                    cnt2 = n - cnt1;
                }
                else {
                    cnt2 = n / 2;
                    cnt1 = n - cnt2;
                }
            }
            if(q == 1)
                cout << cnt1 << "\n";
            else
                cout << cnt2 << "\n";
        }
    }
}