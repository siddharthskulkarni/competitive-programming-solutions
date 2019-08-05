#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int mat[n][n];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) cin >> mat[i][j];
        }
        for(int i = n - 1; i >= 0; i--) {
            for(int j = 0; j < n; j++) {
                cout << mat[j][i] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}