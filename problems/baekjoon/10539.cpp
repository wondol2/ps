#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    
    int b[N+1]{};
    for(int i=1; i<=N; ++i){
        cin >> b[i];
        b[i] *= i;
    }

    for(int i=1; i<=N; ++i){
        cout << b[i]-b[i-1] << " ";
    }
    cout << "\n";
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
