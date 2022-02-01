#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N >> M;
    vector<int> v[N+1];

    for(int i=0; i<M; ++i){
        int a, b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int ans = 0;
    int vis[N+1]{};
    for(int i=1; i<=N; ++i){
        if(!vis[i]){
            queue<int> q;
            q.push(i);

            while(!q.empty()){
                int num = q.front();

                for(int j=0; j<(int)v[num].size(); ++j){
                    if(!vis[v[num][j]]){
                        q.push(v[num][j]);
                        vis[v[num][j]] = 1;
                    }
                }
                q.pop();
            }
            ++ans;
        }
    }
    cout << ans << "\n";
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
