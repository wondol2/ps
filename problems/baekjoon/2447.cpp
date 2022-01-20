#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

char starmap[3000][3000];

void star(int n){
    if(n == 3) return;
    star(n/3);

    int div = n/3;
    int ddiv = div*2;
    for(int i=0; i<div; ++i){
        for(int j=div; j<n; ++j){
            starmap[i][j] = starmap[i][j-div];
            starmap[j][i] = starmap[j-div][i];
        }
    }
    for(int i=div; i<ddiv; ++i){
        for(int j=ddiv; j<n; ++j){
            starmap[i][j] = starmap[i-div][j-ddiv];
            starmap[j][i] = starmap[j-ddiv][i-div];
        }
    }
    for(int i=ddiv; i<n; ++i){
        for(int j=ddiv; j<n; ++j){
            starmap[i][j] = starmap[i-ddiv][j-ddiv];
        }
    }
}

void solve(){
    int N; cin >> N;
    memset(starmap, ' ', 3000*3000*1);
    starmap[0][0] = '*';
    starmap[0][1] = '*';
    starmap[0][2] = '*';
    starmap[1][0] = '*';
    starmap[1][1] = ' ';
    starmap[1][2] = '*';
    starmap[2][0] = '*';
    starmap[2][1] = '*';
    starmap[2][2] = '*';
    star(N);
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            cout << starmap[i][j];
        }
        cout << "\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
