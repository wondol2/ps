#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

const int NUM = 1e9+7;

void solve(){
    int N, M; cin >> N >> M;
    char arr[N][M+1];
    for(int i=0; i<N; ++i) cin >> arr[i];

    long long Edp[N][M]{}, Mdp[N][M]{};
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            if(i) Edp[i][j] += Edp[i-1][j];
            if(j) Edp[i][j] += Edp[i][j-1];
            if(i&&j) Edp[i][j] -= Edp[i-1][j-1];
            if(arr[i][j] == 'E') ++Edp[i][j];
        }
    }
    for(int i=N-1; i>=0; --i){
        for(int j=M-1; j>=0; --j){
            if(i<N-1) Mdp[i][j] += Mdp[i+1][j];
            if(j<M-1) Mdp[i][j] += Mdp[i][j+1];
            if(i<N-1 && j<M-1) Mdp[i][j] -= Mdp[i+1][j+1];
            if(arr[i][j] == 'M') ++Mdp[i][j];
        }
    }
    // for(int i=0; i<N; ++i){
    //     for(int j=0; j<M; ++j){
    //         cout << Edp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    long long ans = 0;
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            if(arr[i][j] == 'S'){
                ans += Edp[i][j] * Mdp[i][j];
                ans %= NUM;
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
