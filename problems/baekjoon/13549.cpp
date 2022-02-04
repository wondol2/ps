#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int MAX_VAL = 200000;
struct node{int x; int d;};

void solve(){
    int N, K; cin >> N >> K;

    int vis[MAX_VAL+1]{};

    queue<node> q;
    q.push({N, 0});
    vis[N] = 1;
    while(!q.empty()){
        node n = q.front();
        int x = n.x;
        if(x == K){
            cout << n.d << "\n";
            return;
        }
        while(x*2 < MAX_VAL && !vis[x*2]){
            q.push({x*2,n.d});
            vis[x*2] = 1;
            x*=2;
        }
        x = n.x;
        if(x-1 >= 0 && !vis[x-1]){
            q.push({x-1,n.d+1});
            vis[x-1] = 1;
        }
        if(x+1 < MAX_VAL && !vis[x+1]){
            q.push({x+1,n.d+1});
            vis[x+1] = 1;
        }
        q.pop();
    }

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
