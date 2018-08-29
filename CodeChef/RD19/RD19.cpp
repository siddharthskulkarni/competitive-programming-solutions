#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, a[1000];
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int min = 5001;
        for(int i = 0; i < n; i++) {
            if((a[i] < min)&&(a[i] != 1))
                min = a[i];
        }
        for(int i = 0; i < n; i++) {
            if(a[i] % min != 0) {
                cout << 0 << "\n";
                goto label;
            }
        }
        cout << -1 << "\n";
        label:
        int no_use = 0;
    }
    return 0;
}