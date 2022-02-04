#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;

    for(int i=1; i<=N; ++i){
        for(int j=0; j<N-i; ++j){
            cout << " ";
        }
        cout << "*";
        for(int j=0; j<2*i-3; ++j){
            cout << " ";
        }
        if(i!=1) cout << "*";
        cout << "\n";
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
