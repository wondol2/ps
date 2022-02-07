#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int ans; cin >> ans;

    while(true){
        char op; cin >> op;
        if(op == '='){
            cout << ans << "\n";
            return;
        }

        int num; cin >> num;

        if(op == '+') ans += num;
        if(op == '-') ans -= num;
        if(op == '*') ans *= num;
        if(op == '/') ans /= num;
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
