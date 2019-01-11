#include<bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x;
    float y;
   
    cin >> x >> setprecision(2) >> y;
    //cout << x << y << "\n";
   
    if(x % 5 == 0 && y >= x + .5) 
       y -= (x + .5);
    
    printf("%0.2f\n", y);
}