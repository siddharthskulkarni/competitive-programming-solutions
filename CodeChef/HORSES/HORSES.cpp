#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        long long s[5000];
        cin >> n;
        for(int i = 0; i < n; i++) 
            cin >> s[i];
        sort(s, s + n);
        long long diff = 10e18;
        for(int i = 0; i < n - 1; i++) {
            if(s[i + 1] - s[i] < diff)
                diff = s[i + 1] - s[i];
        }
        cout << diff << "\n";
    }
}