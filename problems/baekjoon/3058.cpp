#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int ans = 0, minval = 100000;
    for(int i=0; i<7; ++i){
        int num; cin >> num;
        if(!(num&1)){
            ans += num;
            minval = min(minval, num);
        }
    }
    cout << ans << " " << minval << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
