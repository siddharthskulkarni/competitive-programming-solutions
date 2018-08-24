#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, effective_w = 1, effective_b = 0;
        long minx, maxx;
        cin >> n >> minx >> maxx;
        for(int i = 0; i < n ; i++) {
            long w, b;
            cin >> w >> b;
            w %= 2;
            b %= 2;
            effective_w *= w;
            effective_b = effective_b * w + b; 
        }    
        long tot = maxx - minx + 1, even = tot / 2, odd = tot / 2, not_spam = 0, spam = 0;
        if((maxx % 2 == 0) && (minx % 2 == 0))
            even++;
        if((maxx % 2 != 0) && (minx % 2 != 0))
            odd++;
        if(effective_b % 2 == 1)
            spam += even;
        if((effective_w + effective_b) % 2 == 1)
            spam += odd;
        not_spam = tot - spam;
        cout << not_spam << " " << spam << "\n";
    }
    return 0;
}