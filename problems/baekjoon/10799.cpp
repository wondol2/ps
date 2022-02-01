#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string s; cin >> s;

    int open = 1;
    int ans = 0;
    for(int i=1; s[i]; ++i){
        if(s[i] == ')'){
            if(s[i-1] == '('){ // ()
                --open;
                ans += open;
            }
            else{ // ))
                --open;
                ++ans;
            }
        }
        else{ // (
            ++open;
        }
    }
    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
