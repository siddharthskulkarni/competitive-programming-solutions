#include <bits/stdc++.h>
using namespace std;

void print_arr(int x[]) {
    int pos;
    for(int i = 0; i < 200; i++) {
        if(x[i] != 0) {
            pos = i;
            break;
        }
    }
    for(int i = pos; i < 200; i++) 
        cout << x[i];
}

void num_to_arr(int n, int x[]) {
    for(int i = 199; i >= 0; i--) {
        if(n > 0) {
            x[i] = n % 10;
            n /= 10;
        }
        else
            x[i] = 0;
    }
}

void mul(int x[], int y[], int a) {
    int carry = 0;
    for(int i = 199; i >= 0 ; i--) {    
        int cp = y[i] * a + carry;
        y[i] = (y[i] * a + carry) % 10;
        carry = cp / 10;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, y;
    cin >> t;
    while(t--) {
        int fact[200], n;
        cin >> n;
        for(int i = 0; i < 199; i++)
            fact[i] = 0;
        fact[199] = 1;
        for(int i = 1; i <= n; i++) {
            int x[200];
            num_to_arr(i, x);
            mul(x, fact, i);
        }
        print_arr(fact);
        cout << "\n";
    }
    return 0;
} 