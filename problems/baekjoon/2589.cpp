#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

struct node{int y; int x; int d;};

int dy[4] = {1,-1,0,0};
int dx[4] = {0,0,1,-1};

void solve(){
    int N, M; cin >> N >> M;
    string s[N];
    for(int i=0; i<N; ++i) cin >> s[i];

    int ans = 0;
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            if(s[i][j] == 'L'){
                int vis[N][M]{};
                queue<node> q;
                q.push({i,j,0});
                vis[i][j] = 1;

                while(!q.empty()){
                    node n = q.front();
                    ans = max(ans, n.d);
                    for(int k=0; k<4; ++k){
                        int newy = n.y+dy[k], newx = n.x+dx[k];
                        if(newy<0||newy>=N||newx<0||newx>=M) continue;

                        if(s[newy][newx] == 'L' && !vis[newy][newx]){
                            q.push({newy, newx, n.d+1});
                            vis[newy][newx] = 1;
                        }
                    }
                    q.pop();
                }
            }
        }
    }
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
