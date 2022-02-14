#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

#define uid(a,b) uniform_int_distribution<long long>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const long long M = 987654321;

void solve(){
    int T = 1;
    cout << T << "\n";
    
    int N = uid(3,10);
    cout << N << "\n";
    for(int i=0; i<N; ++i){
        cout << uid(1,10) << " ";
    }
    cout << "\n";

    // long long a=1, b=1;
    // cout << a << " " << b << "\n";
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
