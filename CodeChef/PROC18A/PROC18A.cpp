#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k, a[101];
        cin >> n >> k;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int max = 0;
        for(int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = i; j < i + k && j < n; j++)
                sum += a[j];
            if(sum > max)
                max = sum;
        }
        cout << max << "\n";
    }
    return 0;
}