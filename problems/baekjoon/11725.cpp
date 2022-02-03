#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int N;
vector<int> v[100001];
int vis[100001]{};

void dfs(int n){
    for(auto x : v[n]){
        if(!vis[x]){
            vis[x] = n;
            dfs(x);
        }
    }
}

void solve(){
    cin >> N;

    for(int i=0; i<N-1; ++i){
        int a, b; cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);

    for(int i=2; i<=N; ++i){
        cout << vis[i] << "\n";
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
