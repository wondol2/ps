#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

void solve(){
    int V, E; cin >> V >> E;
    vector<vector<int>> v(V+1);

    int vis[V+1]{};
    queue<int> q;

    for(int i=0; i<E; ++i){
        int a, b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(int i=1; i<=V; ++i){
        if(vis[i]) continue;

        q.push(i);
        vis[i] = 1;

        while(!q.empty()){
            int n = q.front(); q.pop();

            for(int k=0; k<(int)v[n].size(); ++k){
                int x = v[n][k];

                if(vis[x] == vis[n]){
                    cout << "NO\n"; return;
                }

                if(vis[x]) continue;
                q.push(x);
                vis[x] = -vis[n];
            }
        }
    }
    cout << "YES\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    cin >> T;
    while(T--){ solve(); }
    return 0;
}
