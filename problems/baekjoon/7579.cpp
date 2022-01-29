#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M, H; cin >> M >> N >> H;
    int arr[H][N][M];
    queue<tuple<int, int, int>> q;

    for(int k=0; k<H; ++k){
        for(int i=0; i<N; ++i){
            for(int j=0; j<M; ++j){
                cin >> arr[k][i][j];
                if(arr[k][i][j] == 1) q.push({k,i,j});
            }
        }
    }

    int cnt = 0;
    while(!q.empty()){
        queue<tuple<int, int, int>> q2;
        while(!q.empty()){
            tuple<int, int, int> p = q.front();

            int k = get<0>(p), y = get<1>(p), x = get<2>(p);
            if(y+1 < N && arr[k][y+1][x] == 0){
                q2.push({k, y+1, x}); arr[k][y+1][x] = 1;
            }
            if(x+1 < M && arr[k][y][x+1] == 0){
                q2.push({k, y, x+1}); arr[k][y][x+1] = 1;
            }
            if(k+1 < H && arr[k+1][y][x] == 0){
                q2.push({k+1, y, x}); arr[k+1][y][x] = 1;
            }
            if(y-1 >= 0 && arr[k][y-1][x] == 0){
                q2.push({k, y-1, x}); arr[k][y-1][x] = 1;
            }
            if(x-1 >= 0 && arr[k][y][x-1] == 0){
                q2.push({k, y, x-1}); arr[k][y][x-1] = 1;
            }
            if(k-1 >= 0 && arr[k-1][y][x] == 0){
                q2.push({k-1, y, x}); arr[k-1][y][x] = 1;
            }
            q.pop();
        }
        if(q2.size() > 0) ++cnt;
        q = q2;
    }

    for(int k=0; k<H; ++k){
        for(int i=0; i<N; ++i){
            for(int j=0; j<M; ++j){
                if(arr[k][i][j] == 0) {
                    cout << "-1\n";
                    return;
                }
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
