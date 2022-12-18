/**
 *  Author: wondol
 *  E-mail: wonsuk0227@gmail.com
**/

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
    int N, M;
    cin >> N >> M;

    int A[N][M], B[N][M];
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            cin >> A[i][j];
        }
    }
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            cin >> B[i][j];
        }
    }
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            cout << A[i][j] + B[i][j];
            if(j != M-1) cout << " ";
        }
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
