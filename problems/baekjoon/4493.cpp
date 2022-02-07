#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;

    int a=0, b=0;

    while(N--){
        char x, y; cin >> x >> y;
        if(x=='R'){
            if(y=='S') ++a;
            if(y=='P') ++b;
        }
        if(x=='S'){
            if(y=='P') ++a;
            if(y=='R') ++b;
        }
        if(x=='P'){
            if(y=='R') ++a;
            if(y=='S') ++b;
        }
    }
    if(a==b) cout << "TIE\n";
    if(a>b) cout << "Player 1\n";
    if(a<b) cout << "Player 2\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
