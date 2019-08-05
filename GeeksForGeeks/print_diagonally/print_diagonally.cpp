#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int arr[n][n];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++) cin >> arr[i][j];
        int row = 1, col = 0;
        while(col < n || row < n) {
            int i, j;
            if(col != n) i = 0, j = col;
            else i = row, j = n - 1;
            while(i < n && j >= 0) {
                cout << arr[i][j] << " ";
                i++;
                j--;
            }
            if(col != n) col++;
            else row++;
        }
        cout << "\n";
    }
    return 0;
}