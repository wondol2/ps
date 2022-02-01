#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string s; cin >> s;

    int cnts[10]{};
    int digit_sum = 0;
    for(int i=0; s[i]; ++i){
        ++cnts[s[i]-'0'];
        digit_sum += s[i]-'0';
    }

    if(cnts[0] == 0 || digit_sum % 3 != 0){
        cout << "-1\n"; return;
    }

    for(int i=9; i>=0; --i){
        for(int j=0; j<cnts[i]; ++j){
            cout << i;
        }
    }
    cout << "\n";
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
