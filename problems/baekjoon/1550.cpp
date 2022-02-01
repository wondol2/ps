#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    string s; cin >> s;
    int num = 0;
    for(int i=0; i<(int)s.size(); ++i){
        num *= 16;
        if(s[i] >= '0' && s[i] <= '9'){
            num += s[i]-'0';
        }
        else{
            num += s[i]-'A' + 10;
        }
    }
    cout << num << "\n";
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
