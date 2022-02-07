#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int S1, S2; cin >> S1 >> S2;
    bool acceptSample=true, acceptSystem=true;

    for(int i=0; i<S1; ++i){
        int a, b; cin >> a >> b;
        if(a != b) acceptSample = false;
    }
    for(int i=0; i<S2; ++i){
        int a, b; cin >> a >> b;
        if(a != b) acceptSystem = false;
    }

    if(acceptSample && acceptSystem) cout << "Accepted\n";
    else if(!acceptSample) cout << "Wrong Answer\n";
    else if(acceptSample && !acceptSystem) cout << "Why Wrong!!!\n";
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
