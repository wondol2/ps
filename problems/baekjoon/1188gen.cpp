#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

#define uid(a,b) uniform_int_distribution<long long>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const long long M = 1000000000000000000;

void solve(){
    int T = 1;
    long long a=1, b=1;

    a = uid(1,100), b = uid(1,100);
    // a = uid(0,30), b = uid(0, 30);
    // if(a >= b) swap(a,b);

    // cout << T << "\n";
    cout << a << " " << b << "\n";
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
