#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

const int MOD = 10;

int pow(int a, int b){
    int ret = 1, piv = a;
    while(b){
        if(b&1) ret = ret*piv%MOD;
        piv = piv*piv%MOD;
        b >>= 1;
    }
    return ret;
}

void solve(){
    int a, b; cin >> a >> b;
    int ret = pow(a,b);
    if(ret == 0) ret = 10;
    cout << ret << "\n";
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
