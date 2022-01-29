#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

struct node{int y; int x; int d;};
int dy[8] = {+2, +1, -1, -2, -2, -1, +1, +2};
int dx[8] = {+1, +2, +2, +1, -1, -2, -2, -1};

void solve(){
    int N; cin >> N;
    int vis[N][N]{};
    queue<node> q;

    int y, x; cin >> y >> x;
    int ey, ex; cin >> ey >> ex;

    q.push({y, x, 0});
    while(!q.empty()){
        node n = q.front();
        if(n.y == ey && n.x == ex){
            cout << n.d << "\n";
            return;
        }

        for(int i=0; i<8; ++i){
            int yy = n.y+dy[i], xx = n.x+dx[i], dd = n.d+1;
            if(yy < 0 || yy >= N || xx < 0 || xx >= N) continue;
            if(!vis[yy][xx]){
                q.push({yy,xx,dd});
                vis[yy][xx] = 1;
            }
        }
        q.pop();
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    cin >> T;
    while(T--){ solve(); }
    return 0;
}
