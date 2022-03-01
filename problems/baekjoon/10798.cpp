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
    vector<string> v(5);
    for(int i=0; i<5; ++i) cin >> v[i];

    for(int i=0; i<15; ++i){
        for(int j=0; j<5; ++j){
            if(v[j].size() > i){
                cout << v[j][i];
            }
        }
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
