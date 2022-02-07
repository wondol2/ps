#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, K; cin >> N >> K;
    int cnt = 0;
    for(int i=0; i<K; ++i){
        int num; cin >> num;
        cnt += (num+1)/2;
    }
    if(N <= cnt) cout << "YES\n";
    else cout << "NO\n";
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
