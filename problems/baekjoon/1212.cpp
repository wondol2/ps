#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string s; cin >> s;
    if(s == "0"){
        cout << "0\n";
        return;
    }
    int ans[1000100]{};

    for(int i=0; i<(int)s.size(); ++i){
        int val = s[i]-'0';
        ans[3*i] = (val >> 2) & 1;
        ans[3*i+1] = (val >> 1) & 1;
        ans[3*i+2] = (val >> 0) & 1;
    }
    int flag = 0;
    for(int i=0; i<(int)s.size()*3; ++i){
        if(!flag && !ans[i]) continue;
        flag = 1;
        cout << ans[i];
    }
    cout << "\n";
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
