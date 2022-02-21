#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

const int NUM = 1000000007;


void solve(){
    int N; cin >> N;

    int fibo[1000001];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2; i<=N; ++i){
        fibo[i] = (fibo[i-1] + fibo[i-2]) % NUM;
    }
    cout << fibo[N] << "\n";
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
