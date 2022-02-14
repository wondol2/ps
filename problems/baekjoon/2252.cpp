#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

const int NUM = 33000;

int N, M;
int vis[NUM];
vector<vector<int>> v(NUM);
vector<int> ans;

void dfs(int n){
    vis[n] = 1;
    for(int i=0; i<(int)v[n].size(); ++i){
        if(vis[v[n][i]]) continue;
        dfs(v[n][i]);
    }
    ans.push_back(n);
}

void solve(){
    cin >> N >> M;
    int incomes[NUM]{};

    while(M--){
        int a, b; cin >> a >> b;
        v[a].push_back(b);
        incomes[b] = 1;
    }

    for(int i=1; i<=N; ++i){
        if(vis[i] && incomes[i]) continue;
        dfs(i);
    }
    reverse(ans.begin(), ans.end());

    for(auto x: ans) cout << x << " ";
    cout << "\n";
}

void solution(){
    cin >> N >> M;
    int incomes[NUM]{};

    while(M--){
        int a, b; cin >> a >> b;
        v[a].push_back(b);
        incomes[b]++;
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=1; i<=N; ++i){
        if(incomes[i]) continue;
        pq.push(i);
    }
    while(!pq.empty()){
        int x = pq.top();
        cout << x << " ";
        pq.pop();
        for(auto &i : v[x]){
            incomes[i]--;
            if(incomes[i] == 0) pq.push(i);
        }
    }
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; cin.ignore(256, '\n');
    while(T--){ solution(); }
    return 0;
}
