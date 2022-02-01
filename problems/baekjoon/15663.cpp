#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


int N, M;
int arr[8];
int vis[8];
vector<int> v;
vector<vector<int>> ans;

void dfs(){
    if((int) v.size() == M){
        ans.push_back(v);
        return;
    }
    for(int i=0; i<N; ++i){
        if(!vis[i]){
            v.push_back(arr[i]);
            vis[i] = 1;
            dfs();
            vis[i] = 0;
            v.pop_back();
        }
    }
}

void solve(){
    cin >> N >> M;
    for(int i=0; i<N; ++i) cin >> arr[i];

    dfs();

    sort(ans.begin(), ans.end());
    int n = unique(ans.begin(), ans.end()) - ans.begin();
    for(int i=0; i<n; ++i){
        for(int j=0; j<(int)ans[i].size(); ++j){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
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
