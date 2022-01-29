#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N >> M;
    char arr[100][101];
    int level[100][100]{};
    
    for(int i=0; i<N; ++i) cin >> arr[i];

    queue<pair<int, int>> q;

    q.push({0, 0});
    level[0][0] = 1;
    while(!q.empty()){
        pair<int, int> p = q.front();
        int y = p.first, x = p.second;
        int lv = level[y][x];
        if(y+1 < N && arr[y+1][x] == '1'){
            q.push({y+1, x}); arr[y+1][x] = '0';
            level[y+1][x] = lv+1;
        }
        if(x+1 < M && arr[y][x+1] == '1'){
            q.push({y, x+1}); arr[y][x+1] = '0';
            level[y][x+1] = lv+1;
        }
        if(y-1 >= 0 && arr[y-1][x] == '1'){
            q.push({y-1, x}); arr[y-1][x] = '0';
            level[y-1][x] = lv+1;
        }
        if(x-1 >= 0 && arr[y][x-1] == '1'){
            q.push({y, x-1}); arr[y][x-1] = '0';
            level[y][x-1] = lv+1;
        }
        q.pop();
    }
    cout << level[N-1][M-1] << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
