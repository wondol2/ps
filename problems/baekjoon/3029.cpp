#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    char t;
    int H, M, S; cin >> H >> t >> M >> t >> S;
    int h, m, s; cin >> h >> t >> m >> t >> s;
    h-=H, m-=M, s-=S;

    if(s<0){
        s+=60; m-=1;
    }
    if(m<0){
        m+=60; h-=1;
    }
    if(h<0){
        h+=24;
    }
    if(!h&&!m&&!s) h = 24;
    cout << (h<10?"0":"") << h << ":";
    cout << (m<10?"0":"") << m << ":";
    cout << (s<10?"0":"") << s << "\n";
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
