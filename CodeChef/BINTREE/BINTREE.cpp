#include<bits/stdc++.h>
using namespace std;

long ret_parent_node(long x) {
    if(x % 2 == 0)
        return x / 2;
    else 
        return (x - 1) / 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        long i, j;
        cin >> i >> j;
        long long path_len = 0;
        while(i != j) {
            if((i != 1)&&(i > j)) {
                i = ret_parent_node(i);
                path_len++;
            }
            if((j != 1)&&(j > i)) {
                j = ret_parent_node(j);
                path_len++;
            }
        }
        cout << path_len << "\n";
    }
}