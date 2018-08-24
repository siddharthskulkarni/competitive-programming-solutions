#include <bits/stdc++.h>
using namespace std;

struct charac {
	char c;
	int f;
};

bool comparator(charac ch1, charac ch2) {
	return (ch1.f < ch2.f);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
    	string s;
    	cin >> s;
    	sort(s.begin(), s.end());
    	charac ch[100000];
    	int ptr = 0, cnt = 1;
    	for(int i = 0; s[i] != NULL; i++) {
    		if(s[i] != s[i + 1]) {
    			ch[ptr].c = s[i];
    			ch[ptr].f = cnt;
    			ptr++;
    			cnt = 0;
    		}
    		cnt++;	
    	}	
    	sort(ch, ch + ptr, comparator);
    	for(int i = 2; i < ptr; i++) {
    		if(ch[i].f != ch[i - 1].f + ch[i - 2].f) {
    			if((i == 3) && (ch[3].f == ch[2].f + ch[0].f))
    				goto label1; 
    			cout << "Not\n";
    			goto label;
    		}
    		label1:
    		continue;
    	}
    	cout << "Dynamic\n";
    	label:
    	continue;
    }
    cout << "\n";
    return 0;
} 