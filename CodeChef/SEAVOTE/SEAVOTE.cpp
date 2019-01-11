#include<bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        
        int n, b[10000], b_sum = 0, cnt = 0;
        bool flag = true;
        cin >> n;
        
        for(int i = 0; i < n; i++) {
            
            cin >> b[i];
            b_sum += b[i];
            
            if(b[i] > 100) 
                flag = false;
            
            if(b[i] > 0)
                cnt++;
        }
        
        if(flag && b_sum - 100 < cnt && b_sum >= 100)
            cout << "YES" << "\n";
        else 
            cout << "NO" << "\n";
    }
    
    return 0;
}