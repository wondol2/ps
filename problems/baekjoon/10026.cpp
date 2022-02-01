#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

struct node{int y; int x;};

void solve(){
    int N; cin >> N;
    char arr[N][N+1];
    for(int i=0; i<N; ++i) cin >> arr[i];

    int ans1=0, ans2=0;
    bool vis[N][N]{};
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            if(!vis[i][j]){
                char color = arr[i][j];
                queue<node> q;
                q.push({i,j});
                vis[i][j] = 1;

                while(!q.empty()){
                    node n = q.front();
                    for(int k=0; k<4; ++k){
                        int newy=n.y+dy[k], newx=n.x+dx[k];
                        if(!vis[newy][newx] && arr[newy][newx]==color){
                            q.push({newy,newx});
                            vis[newy][newx] = 1;
                        }
                    }
                    q.pop();
                }
                ++ans1;
            }
        }
    }
    memset(vis, 0, N*N);
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            if(!vis[i][j]){
                char color = arr[i][j];
                char color2 = (color == 'R'?'G':(color=='G'?'R':'B'));
                queue<node> q;
                q.push({i,j});
                vis[i][j] = 1;

                while(!q.empty()){
                    node n = q.front();
                    for(int k=0; k<4; ++k){
                        int newy=n.y+dy[k], newx=n.x+dx[k];
                        if(!vis[newy][newx] && (arr[newy][newx]==color || arr[newy][newx]==color2)){
                            q.push({newy,newx});
                            vis[newy][newx] = 1;
                        }
                    }
                    q.pop();
                }
                ++ans2;
            }
        }
    }
    cout << ans1 << " " << ans2 << "\n";
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
