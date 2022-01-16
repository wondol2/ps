#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int n, u, v;
    cin >> n;
    vector<vector<int>> vec(n+1);
    map<pair<int,int>, int> m;
    vector<int> ans (n+1);

    bool flag = true;
    for (int i=0; i<n-1; i++){
        cin >> u >> v;
        --u; --v;
        vec[u].push_back(v);
        vec[v].push_back(u);

        m[{u,v}] = i;
        m[{v,u}] = i;
    }

    int s=-1, e=-1;
    for(int i=0; i<n; i++){
        if(vec[i].size() > 2){
            cout << -1 << '\n';
            return;
        }
        if(vec[i].size() == 1){
            if(s == -1) s = i;
            else e = i;
        }
    }

    vector<bool> visit(n+1, false);

    int idx = s;
    int weight = 2;

    while(idx != e){
        int nextNode = vec[idx][0];
        if(visit[nextNode]){
            nextNode = vec[idx][1];
        }

        visit[idx] = true;
        ans[m[{idx, nextNode}]] = weight;
        
        weight ^= 7;
        // if(weight == 2) weight = 3;
        // else if(weight == 3) weight = 2;

        idx = nextNode;
    }

    for(int i=0; i<n-1; i++){
        cout << ans[i] << " ";
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
