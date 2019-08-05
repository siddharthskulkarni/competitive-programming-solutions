#include<bits/stdc++.h>
using namespace std;
long long mod =1000000007;
long long countWays(int);
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m;
        cin>>m;
        cout<<countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

/*This is a function problem.You only need to complete the function given below*/
// function to count ways to reach mth stair

long long countWays(int m){
    long long arr[m + 1];
    arr[1] = 1;
    arr[2] = 2;
    for(int i = 3; i <= m; i++) {
        if(i % 2 == 0) arr[i] = arr[i - 1] + 1;
        else arr[i] = arr[i - 1];
    }
    return arr[m];
}
