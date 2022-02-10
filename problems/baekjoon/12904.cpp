 #include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif


void solve(){
    string s, t; cin >> s >> t;
    int S = s.size(), T = t.size();
    while(T > S){
        // cout << T << " " << S << "\n";
        if(t[T-1] == 'A'){
            --T;
        }
        else if(t[T-1] == 'B'){
            --T;
            reverse(t.begin(), t.begin()+T);
        }
    }
    if(t.substr(0,T) == s) cout << "1\n";
    else cout << "0\n";
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
