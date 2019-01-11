#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long k;
    cin >> n >> k;
    long a[n], b[n];
    for(int i = 0; i < n; i++) { 
        cin >> a[i];
        b[i] = a[i];
    }
    if(k != 0) {    
        long max = a[0];
        for(int i = 0; i < n; i++) {
            if(a[i] > max)
                max = a[i];
        }
        for(int i = 0; i < n; i++)
            b[i] = max - b[i];
        if(k % 2 == 0) {
            long max2 = b[0];
            for(int i = 0; i < n; i++) {
                if(b[i] > max2)
                    max2 = b[i];
            }
            for(int i = 0; i < n; i++)
                cout << max2 - b[i] << " ";
        }
        else {
            for(int i = 0; i < n; i++)
                cout << b[i] << " ";
        }
    }
    else 
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
}