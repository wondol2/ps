#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin>>N>>M;
    int h=0, a=0;
    for(int i=0; i<N; ++i){
        int n; cin >> n;
        h = max(h,n);
    }
    for(int i=0; i<M; ++i){
        int n; cin >> n;
        a = max(a,n);
    }
    cout << h+a << "\n";
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
