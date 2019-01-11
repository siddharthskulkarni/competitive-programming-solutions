#include<bits/stdc++.h>
using namespace std;

long nC2(long x) {
    return (x * (x - 1)) / 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        long a[n];
        int count0 =0, count1 = 0, count2 = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 1)
                count1++;
            if(a[i] == 2)
                count2++;
            if(a[i] == 0)
                count0++;
        }
        cout << nC2(n - count1 - count0) - nC2(count2) << "\n";
    }
}