#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
    	string s1,s2;
    	cin >> s1 >> s2;
    	for(int i = 0; i < 3; i++) {
    		if((s1[i] == 'o')||(s2[i] == 'o')) {
    			for(int j = 0; j < 3; j++) {
    				if((s1[j] != 'b') && (s2[j] != 'b') && (j != i))
    					goto label;
    			}
    			cout << "yes\n";
    			goto label1;
    		}
    		label:
    		if(i == 2) {
    			cout << "no\n";
    			goto label1;
    		}
    	}
    	label1:
    	continue;
   	}
   	cout << "\n";
   	return 0;
} 