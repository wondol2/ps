#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

const int NUM = 10000;

int N;
vector<int> v;
vector<bool> vis(8, 0);

void dfs(){
    if(v.size() == N){
        for(auto x: v) cout << x << " ";
        cout << "\n";
    }
    for(int i=1; i<=N; ++i){
        if(vis[i]) continue;

        vis[i] = true;
        v.push_back(i);
        dfs();
        vis[i] = false;
        v.pop_back();
    }
}

void solve(){
    cin >> N;
    dfs();
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    while(T--){ solve(); }
    // cin >> T; // cin.ignore(256, '\n');
    return 0;
}
