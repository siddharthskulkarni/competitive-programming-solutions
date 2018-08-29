#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        long a[3], x, y;
        cin >> a[0] >> a[1] >> a[2] >> x >> y;
        if(x + y != a[0] + a[1] + a[2])
            cout << "NO\n";
        else {    
            long long min = 10e18;
            if(x < y)
                min = x;
            else
                min = y;
            int cnt = 0;
            for(int i = 0; i < 3; i++) {
                if(a[i] <= min)
                    cnt++;
            }
            if(cnt > 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}