#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int N;
int vis_vertical[50];
int vis_pos_diag[50];
int vis_neg_diag[50];
// int vis[15][15];
int cnt = 0;

int get_idx_pos_diag(int y, int x){
    return y-x + 15;
}
int get_idx_neg_diag(int y, int x){
    return y+x;
}
void dfs(int y){ // y : horizontal
    if(y == N) {
        ++cnt;
        return;
    }
    for(int x=0; x<N; ++x){ // (y, x)
        if(vis_vertical[x] == 0 &&
           vis_pos_diag[get_idx_pos_diag(y, x)] == 0 &&
           vis_neg_diag[get_idx_neg_diag(y, x)] == 0){

            vis_vertical[x] = 1;
            vis_pos_diag[get_idx_pos_diag(y, x)] = 1;
            vis_neg_diag[get_idx_neg_diag(y, x)] = 1;
            dfs(y+1);
            vis_vertical[x] = 0;
            vis_pos_diag[get_idx_pos_diag(y, x)] = 0;
            vis_neg_diag[get_idx_neg_diag(y, x)] = 0;
        }
    }
}

void solve(){
    cin >> N;
    dfs(0);
    cout << cnt << "\n";
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
