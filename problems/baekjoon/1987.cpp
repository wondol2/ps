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

int dy[4] = {1,-1,0,0};
int dx[4] = {0,0,1,-1};

int vis = 0;
int ans = 0;
int N, M;
char arr[30][30];

int getIndex(char c){
    return 1 << (c - 'A');
}

void dfs(int a, int b, int d){
    ans = max(ans, d);

    for(int i=0; i<4; ++i){
        int y = a + dy[i];
        int x = b + dx[i];

        if(y<0 || y>=N || x<0 || x>=M) continue;
        int index = getIndex(arr[y][x]);
        if(vis & index) continue;

        vis ^= index;
        dfs(y, x, d+1);
        vis ^= index;
    }
}

void solve(){
     cin >> N >> M;
    for(int i=0; i<N; ++i) cin >> arr[i];

    vis ^= getIndex(arr[0][0]);
    dfs(0,0,1);

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
