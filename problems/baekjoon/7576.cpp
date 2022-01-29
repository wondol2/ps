#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> M >> N;
    int arr[N][M];
    queue<pair<int, int>> q;

    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            cin >> arr[i][j];
            if(arr[i][j] == 1) q.push({i,j});
        }
    }
    
    int cnt = 0;
    while(!q.empty()){
        queue<pair<int, int>> q2;
        while(!q.empty()){
            pair<int, int> p = q.front();
            int y = p.first, x = p.second;
            if(y+1 < N && arr[y+1][x] == 0){
                q2.push({y+1, x}); arr[y+1][x] = 1;
            }
            if(x+1 < M && arr[y][x+1] == 0){
                q2.push({y, x+1}); arr[y][x+1] = 1;
            }
            if(y-1 >= 0 && arr[y-1][x] == 0){
                q2.push({y-1, x}); arr[y-1][x] = 1;
            }
            if(x-1 >= 0 && arr[y][x-1] == 0){
                q2.push({y, x-1}); arr[y][x-1] = 1;
            }
            q.pop();
        }
        if(q2.size() > 0) ++cnt;
        q = q2;
    }
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            if(arr[i][j] == 0){
                cout << "-1\n";
                return;
            }
        }
    }

    cout << cnt << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
