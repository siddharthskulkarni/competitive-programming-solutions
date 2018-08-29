#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        long x, a[1000];
        cin >> n >> x;
        for(int i = 0; i < n; i++) 
            cin >> a[i];
        for(int i = 0; i < n ; i++) {
            if(a[i] >= x) {
                cout << "YES\n";
                goto label;
            }
        }
        cout << "NO\n";
        label:
        continue;
    }
    return 0;
}