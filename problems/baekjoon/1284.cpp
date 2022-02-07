#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    while(true){
        string s; cin >> s;

        if(s == "0") return;

        int ans = s.size()+1;

        for(int i=0; i<(int)s.size(); ++i){
            int x = s[i]-'0';
            if(x == 0) ans += 4;
            else if(x == 1) ans += 2;
            else ans += 3;
        }

        cout << ans << "\n";
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
