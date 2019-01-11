#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int trian[n][n];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i >= j)
                    cin >> trian[i][j];
                else 
                    trian[i][j] = 0;
            }
        }
        for(int i = n - 2; i >= 0; i--) {
            for(int j = 0; j <= i; j++) {
                trian[i][j] += max(trian[i + 1][j], trian[i + 1][j + 1]);
            }
        }
        cout << trian[0][0] << "\n";
    }
}