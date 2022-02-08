#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

struct node {int y; int x;};
int dy[4] = {1,-1,0,0};
int dx[4] = {0,0,1,-1};

void solve(){
    int N, M; cin >> N >> M;
    int arr[N][M];
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            cin >> arr[i][j];
        }
    }

    int time = -1;
    int lastMeltCnt = 0;
    int meltCnt = -1;

    while(meltCnt != 0){
        lastMeltCnt = meltCnt;
        meltCnt = 0;
        ++time;

        int vis[N][M]{};
        queue<node> q;
        q.push({0,0});

        while(!q.empty()){
            node n = q.front();

            for(int k=0; k<4; ++k){
                int y = n.y+dy[k], x = n.x+dx[k];

                if(y<0||y>=N||x<0||x>=M) continue;

                if(arr[y][x] == 0 && !vis[y][x]){
                    q.push({y,x});
                    vis[y][x] = 1;
                }
                if(arr[y][x] == 1 && !vis[y][x]){
                    ++meltCnt;
                    vis[y][x] = 1;
                }
            }

            q.pop();
        }
        for(int i=0; i<N; ++i){
            for(int j=0; j<M; ++j){
                if(vis[i][j]) arr[i][j] = 0;
            }
        }
    }

    cout << time << "\n";
    cout << lastMeltCnt << "\n";
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
