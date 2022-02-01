#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int a, b; cin >> a >> b;

    int ans = b-a;
    int a2 = a;

    while(a2 <= b){
        int x = a2-a; // a+=
        for(int y=0; y<=a; ++y){ // b+=
            ans = min(ans, x+y+1 + ((a+x)|(b+y))-(b+y));
        }
        a2 = (a2|(a2-1))+1; // add lsb to a2
    }

    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    cin >> T;
    while(T--){ solve(); }
    return 0;
}
