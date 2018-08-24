#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        long l[100000], c[100000];
        cin >> n;
        for(int i = 0; i < n; i++) 
            cin >> c[i];
        long use_cost = c[0];
        long long tot = 0;
        for(int i = 0; i < n; i++)
            cin >> l[i];
        tot += l[0] * c[0];
        for(int i = 1; i < n; i++) {
            if(use_cost < c[i]) 
                tot += use_cost * l[i];
            else {
                tot += l[i] * c[i];
                use_cost = c[i];
            }
        }
        cout << tot << "\n";
    }
    return 0;
} 