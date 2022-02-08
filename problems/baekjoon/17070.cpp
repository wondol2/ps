#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

// 0: horizon, 1: vertical, 2: diagonal

int N;
int ans = 0;
int arr[20][20];

bool check(int y, int x, int dir){
    if(dir == 0) return x+1 < N && !arr[y][x+1];
    if(dir == 1) return y+1 < N && !arr[y+1][x];

    // dir == 2
    return x+1 < N && y+1 < N && 
        !arr[y+1][x+1] && !arr[y][x+1] && !arr[y+1][x];
}

void dfs(int y, int x, int dir){
    // cout << y << " " << x << " " << dir << "\n";
    if(y == N-1 && x == N-1) ++ans; 
    if(dir == 0){
        if(check(y,x,0)) dfs(y, x+1, 0);
        if(check(y,x,2)) dfs(y+1, x+1, 2);
    }
    else if(dir == 1){
        if(check(y,x,1)) dfs(y+1, x, 1);
        if(check(y,x,2)) dfs(y+1, x+1, 2);
    }
    else if(dir == 2){
        if(check(y,x,0)) dfs(y, x+1, 0);
        if(check(y,x,1)) dfs(y+1, x, 1);
        if(check(y,x,2)) dfs(y+1, x+1, 2);
    }
}

void solve(){
    cin >> N;
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            cin >> arr[i][j];
        }
    }

    dfs(0, 1, 0);
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
