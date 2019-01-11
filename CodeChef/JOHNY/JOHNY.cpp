#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, k, temp;
        cin >> n;
        vector<pair<int, int>> songs;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            songs.push_back(make_pair(temp, i + 1));
        }
        cin >> k;
        sort(songs.begin(), songs.end());
        for(int i = 0; i < n; i++) {
            if(songs[i].second == k) {
                cout << i + 1 << "\n";
                break;
            }
        } 
    }
}