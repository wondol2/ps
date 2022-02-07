#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
/*
    a + b + c = N
    c >= b+2
    a,b,c >= 1
    a = 2k
*/
    int ans = 0;

    for(int a=1; a<N; ++a){
        for(int b=1; b<N; ++b){
            for(int c=1; c<N; ++c){
                if(c >= b+2 && a+b+c == N && !(a&1)) ++ans;
            }
        }
    }
    cout << ans << "\n";
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
