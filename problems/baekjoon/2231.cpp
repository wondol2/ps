#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    for(int i=0; i<=1000000; ++i){
        int n = i;
        int temp = 0;
        while(n){
            temp += n%10;
            n/=10;
        }
        if(i+temp == N){
            cout << i << "\n";
            return;
        }
    }
    cout << 0 << "\n";
    return;
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
