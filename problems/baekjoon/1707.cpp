#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

struct node{int idx; int d;};

void solve(){
    int V, E; cin >> V >> E;
    vector<int> v[V];

    int vis[V]{};
    queue<node> q;

    for(int i=0; i<E; ++i){
        int a, b; cin >> a >> b;
        --a; --b;
        v[a].push_back(b);
        v[b].push_back(a);

        if(!vis[a]){ q.push({a, 1}); vis[a] = 1; }
        if(!vis[b]){ q.push({b, 1}); vis[b] = 1; }
    }
    memset(vis, 0, V*4);

    while(!q.empty()){
        node n = q.front();
        for(int i=0; i<v[n.idx].size(); ++i){
            int newidx = v[n.idx][i];
            if(!vis[newidx]){
                q.push({newidx, n.d+1});
                vis[newidx] = 1;
            }
            else{
                if(n.d & 1){
                    cout << "NO\n"; return;
                }
            }
        }
        q.pop();
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
