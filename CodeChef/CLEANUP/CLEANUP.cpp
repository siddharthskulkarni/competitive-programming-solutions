#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int jobs_done[1000], jobs[1000];
        int ptr = 0, parity = 0;
        for(int i = 0; i < m; i++)
            cin >> jobs_done[i];
        sort(jobs_done, jobs_done + m);
        vector<int> jobs_for_chef, jobs_for_assis;
        for(int i = 0; i < n; i++) {
            jobs[i] = i + 1;
            if((jobs[i] == jobs_done[ptr])&&(ptr < m)) {
                jobs[i] = 0;
                ptr++;
            }
        }
        for(int i = 0; i < n; i++) {
            if(jobs[i] != 0) {
                if(parity % 2 == 0) {
                    jobs_for_chef.push_back(jobs[i]);
                    parity++;
                }
                else {
                    jobs_for_assis.push_back(jobs[i]);
                    parity++;
                }
            }
        }
        for(int i = 0; i < jobs_for_chef.size(); i++)
            cout << jobs_for_chef[i] << " ";
        cout << "\n";
        for(int i = 0; i < jobs_for_assis.size(); i++)
            cout << jobs_for_assis[i] << " ";
        cout << "\n";
    }
}