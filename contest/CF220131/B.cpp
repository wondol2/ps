#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string s; cin >> s;
    int ans = 0;

    int zerocnt=0, onecnt=0;
    for(int i=0; s[i]; ++i){
        if(s[i] == '0') ++zerocnt;
        else ++onecnt;
    }
    if(zerocnt == onecnt) cout << zerocnt-1 << "\n";
    else cout << min(onecnt, zerocnt) << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T;
    while(T--){ solve(); }
    return 0;
}
