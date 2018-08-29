#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, a[100][100];
        cin >> n;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        int trace1 = 0, trace2 = 0, max_trace = 0;
        for(int i = 1; i <= n; i++) {    
            int j = 0, ptr = n - i; 
            while(ptr <= n - 1) {
                trace1 += a[j][ptr];
                trace2 += a[ptr][j];
                ptr++;
                j++;
            }
            if(trace1 > max_trace)   
                max_trace = trace1;
            if(trace2 > max_trace)
                max_trace = trace2;
            //cout << trace1 << "\t" << trace2 << "\t";
            trace1 = trace2 = 0;
        }
        cout << max_trace << "\n";
    }
}