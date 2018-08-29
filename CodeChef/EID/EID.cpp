#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        long v[100000];
        for(int i = 0; i < n; i++)
            cin >> v[i];
        long long min = 10e18;
        sort(v, v + n);
        for(int i = 1; i < n; i++) {
            if(v[i] - v[i - 1] < min)
                min = v[i] - v[i - 1];
        }
        cout << min << "\n";
    }
}