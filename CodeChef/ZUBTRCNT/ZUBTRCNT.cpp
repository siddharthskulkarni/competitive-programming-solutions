#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, ptr = 1;
    cin >> t;
    while(t--) {
        int l, k;
        cin >> l >> k;
        if(l >= k)
            cout << "Case " << ptr++ << ": " << ((l - k + 1) * (l - k + 2))  / 2 << "\n";
        else
            cout << "Case " << ptr++ << ": " <<0 << "\n";
    }
}