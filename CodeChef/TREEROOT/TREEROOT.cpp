#include<bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        
        int n, id, child_id_sum, root = 0;
        cin >> n;
        
        for(int i = 0; i < n; i++) {
            cin >> id >> child_id_sum;
            root += id - child_id_sum;
        }
        
        cout << root << "\n";
    }
}