#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int res = a - b;
    if(res % 10 == 9)
        res -= 1;
    else
        res += 1;
    cout << res;
}