#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N >> M;
    int arr[N][M];
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<M; ++i){
        for(int j=0; j<N; ++j){
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
