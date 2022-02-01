#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string s; cin >> s;
    int N = s.size();

    int la = 0, ra = 0;
    for(int i=0; i<N; ++i){
        if(s[i] == 'a') ++la;
        else break;
    }
    for(int i=0; i<N; ++i){
        if(s[N-i-1] == 'a') ++ra;
        else break;
    }
    if(ra-la < 0) {
        cout << "No\n";
        return;
    }

    int e = N-ra;
    for(int i=la; i<e; ++i){
        if(e+la-i-1 < i) break;

        if(s[i] != s[e+la-i-1]){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
