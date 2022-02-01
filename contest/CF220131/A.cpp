#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    if(N % 7 == 0) {
        cout << N << "\n";
        return;
    }
    int n = N-N%10;
    while(n%7 != 0){
        n++;
    }
    cout << n << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T;
    while(T--){ solve(); }
    return 0;
}
