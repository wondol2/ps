#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M, K; cin >> N >> M >> K;
    int arr[N][M]{};
    
    for(int i=0; i<K; ++i){
        int a, b;
        cin >> a >> b;
        arr[a][b] = 1;
    }
    int cnt = 0;
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            if(arr[i][j] == 1){
                queue<pair<int, int>> q;
                q.push({i, j});
                arr[i][j] = 0;
                while(!q.empty()){
                    pair<int, int> p = q.front();
                    // debug(p);
                    int y = p.first, x = p.second;
                    if(y+1 < N && arr[y+1][x] == 1){
                        q.push({y+1, x}); arr[y+1][x] = 0;
                    }
                    if(x+1 < M && arr[y][x+1] == 1){
                        q.push({y, x+1}); arr[y][x+1] = 0;
                    }
                    if(y-1 >= 0 && arr[y-1][x] == 1){
                        q.push({y-1, x}); arr[y-1][x] = 0;
                    }
                    if(x-1 >= 0 && arr[y][x-1] == 1){
                        q.push({y, x-1}); arr[y][x-1] = 0;
                    }
                    q.pop();
                }
                ++cnt;
            }
        }
    }
    cout << cnt << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    cin >> T;
    while(T--){ solve(); }
    return 0;
}
