#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long n;
        cin >> n;
        for(int i = n + 1; i < n + 1001; i++) {
            long n1 = i, cnt = 0;
            while(n1 > 0) {
                if(n1 % 10 == 3)
                    cnt++;
                n1 /= 10;
            }
            if(cnt >= 3) {
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}