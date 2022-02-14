#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

int N, M;
vector<vector<int>> v(1001);
int vis[1001];
int assign[1001];

bool dfs(int n){
    for(int i=0; i < (int) v[n].size(); ++i){
        int x = v[n][i];
        if(vis[x]) continue;

        vis[x] = 1;
        if(assign[x] == 0 || dfs(assign[x])){
            assign[x] = n;
            return true;
        }
    }
    return false;
}


void solve(){
    cin >> N >> M;

    for(int i=1; i<=N; ++i){
        int K; cin >> K;
        for(int j=0; j<K; ++j){
            int n; cin >> n;
            v[i].push_back(n);
        }
    }

    int ret = 0;
    for(int i=1; i<=N; ++i){
        memset(vis, 0, sizeof(vis));
        if(dfs(i)) ++ret;
    }

    // for(int i=1; i<=N; ++i){
    //     cout << assign[i] << " ";
    // }
    // cout << "\n";

    cout << ret << "\n";
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
