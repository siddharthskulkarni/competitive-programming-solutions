#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int  flag = 0;
        if(n % 2 != 0) flag = 1;
        for(int i = n - 1 - flag; i >= 0; i -= 2) {
            char temp = s[i];
            s[i] = s[i - 1];
            s[i - 1] = temp;
        }
        for(int i = 0; i < n; i++)
            s[i] = 219 - int(s[i]);
        cout << s << "\n";
    }
    return 0;
} 