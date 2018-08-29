#include<bits/stdc++.h>
#define AND &&
using namespace std;

struct icpc_contestant{
    int s1, s2, s3;
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        icpc_contestant ic[3];
        for(int i = 0; i < 3; i++) 
            cin >> ic[i].s1 >> ic[i].s2 >> ic[i].s3;
        int cnt = 0;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(j != i) {        
                    if((ic[i].s1 >= ic[j].s1) AND (ic[i].s2 >= ic[j].s2) AND (ic[i].s3 > ic[j].s3))
                        cnt++;
                    else if((ic[i].s1 >= ic[j].s1) AND (ic[i].s2 > ic[j].s2) AND (ic[i].s3 >= ic[j].s3)) 
                        cnt++;
                    else if((ic[i].s1 > ic[j].s1) AND (ic[i].s2 >= ic[j].s2) AND (ic[i].s3 >= ic[j].s3)) 
                        cnt++;
                    else
                        continue;
                }
            }
        }
        if(cnt >= 3) 
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }
    return 0;
}