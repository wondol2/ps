#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N >> M;
    int a[N], b[M];
    for(int i=0; i<N; ++i) cin >> a[i];
    for(int i=0; i<M; ++i) cin >> b[i];

    for(int x=0, y=0; x<N || y<M;){
        if(x!=N && (y==M || a[x] < b[y])){
            cout << a[x] << " ";
            ++x;
        }
        else{
            cout << b[y] << " ";
            ++y;
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
