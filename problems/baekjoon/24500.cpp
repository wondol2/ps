#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

const int NUM = 10000;


void solve(){
    long long N; cin >> N;

    long long t = 1;
    while(t <= N){
        t <<= 1;
    }
    --t;
    if(N == t){
        cout << 1 << "\n" << N << "\n";
    }
    else{
        cout << 2 << "\n";
        cout << (t^N) << "\n" << N << "\n";
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
