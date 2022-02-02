#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

struct node{int y; int x;};
int dx[8]={1,1,0,0,1,-1,-1,-1};
int dy[8]={1,-1,1,-1,0,0,1,-1};

void solve(){
    while(true){
        int N, M; cin >> M >> N;
        if(M==0 && N==0) return;

        int arr[N][M];
        for(int i=0; i<N; ++i){
            for(int j=0; j<M; ++j){
                cin >> arr[i][j];
            }
        }
        // int vis[N][M]{};
        int ans = 0;
        for(int i=0; i<N; ++i){
            for(int j=0; j<M; ++j){
                if(arr[i][j] == 1){
                    queue<node> q;
                    q.push({i,j});
                    arr[i][j] = 0;
                    // vis[i][j] = 1;

                    while(!q.empty()){
                        node n = q.front();
                        for(int i=0; i<8; ++i){
                            int y = n.y + dy[i], x = n.x + dx[i];
                            if(y<0 || y>=N || x<0 || x>=M) continue;

                            if(arr[y][x] == 1){
                                arr[y][x] = 0;
                                q.push({y,x});
                            }
                        }
                        q.pop();
                    }
                    ++ans;
                }
            }
        }
        cout << ans << "\n";
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
