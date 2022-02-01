#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N >> M;
    int num = 0;
    int psum[N+1][N+1]{};

    for(int i=1; i<=N; ++i){
        for(int j=1; j<=N; ++j){
            cin >> num;
            psum[i][j] = psum[i-1][j]+psum[i][j-1]-psum[i-1][j-1]+num;
        }
    }

    while(M--){
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;
        --y1; --x1;
        cout << psum[y2][x2]-psum[y1][x2]-psum[y2][x1]+psum[y1][x1] << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
