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
        if(s=="#") return;

        int ans = 0;
        for(int i=0; s[i]; ++i){
            ans *= 8;

            if(s[i] == '-') ans += 0;
            if(s[i] == '\\') ans += 1;
            if(s[i] == '(') ans += 2;
            if(s[i] == '@') ans += 3;
            if(s[i] == '?') ans += 4;
            if(s[i] == '>') ans += 5;
            if(s[i] == '&') ans += 6;
            if(s[i] == '%') ans += 7;
            if(s[i] == '/') ans -= 1;
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
