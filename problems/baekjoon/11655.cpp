#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string s;

    getline(cin, s);

    for(int i=0; s[i]; ++i){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] -= 13;
            if(s[i] < 'A') s[i] += 26;
        }
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 13;
            if(s[i] < 'a') s[i] += 26;
        }
    }

    cout << s << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
