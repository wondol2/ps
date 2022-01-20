#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibo(n-1) + fibo(n-2);
}

void solve(){
    int N;
    cin >> N;

    cout << fibo(N) << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
