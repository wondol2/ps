#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


long long divcon(long long a, long long b, long long c){
    // cout << a << " " << b << " " << c << "\n";
    if(b == 0) return 1%c;
    if(b == 1) return a%c;
    
    if(b&1){
        long long val = divcon(a, (b-1)/2, c);
        return ((a%c) * ((val*val)%c)) % c;
    }
    else{
        long long val = divcon(a, b/2, c);
        return (val*val) % c;
    }
}


void solve(){
    long long a, b, c;
    cin >> a >> b >> c;
    // cout << LONG_LONG_MAX << "\n";
    // long long k = 2147483647;
    // cout << k * k << "\n";
    cout << divcon(a,b,c) << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
