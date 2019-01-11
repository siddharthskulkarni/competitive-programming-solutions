#include<bits/stdc++.h>
using namespace std;

bool subset_sums(int ptr, long sum, int req_sum, vector<int> notes) {
    if(req_sum == sum)
        return true;
    
    if(ptr == 20) {
        if(req_sum == sum)
            return true;
        else
            return false;
    }
    
    if(subset_sums(ptr + 1, sum + notes[ptr], req_sum, notes) || subset_sums(ptr + 1, sum, req_sum, notes))
        return true;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, m;
        vector<int> notes(20);
        
        cin >> n >> m;
        for(int i = 0; i < n; i++)
            cin >> notes[i];
            
        /*for(int note: notes)
            cout << note << "\t";
        cout << "\n";*/
            
        if(subset_sums(0, 0, m, notes))
            cout << "Yes" << "\n";
        else
            cout << "No" << "\n";
    }
    
    return 0;
}