#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

const int NUM = 100001;

int N, Q;
int X[NUM];
vector<vector<int>> graph(NUM);
vector<priority_queue<int, vector<int>, greater<int>>> v(NUM);
bool vis[NUM];

priority_queue<int, vector<int>, greater<int>> dfs(int n){
    priority_queue<int, vector<int>, greater<int>> ret;

    ret.push(X[n]);

    for(int i=0; i<(int) graph[n].size(); ++i){
        int node = graph[n][i];
        if(vis[node]) continue;

        vis[node] = true;
        auto pq = dfs(node);
        while(!pq.empty()){
            if(ret.size() == 20){
                if(ret.top() < pq.top()){
                    ret.pop(); ret.push(pq.top());
                }
            }
            else{
                ret.push(pq.top());
            }
            pq.pop();
        }
    }

    v[n] = ret;
    return ret;
}


void solve(){
    cin >> N >> Q;
    for(int i=0; i<N; ++i){
        cin >> X[i];
    }

    for(int i=0; i<N-1; ++i){
        int a, b; cin >> a >> b;
        --a; --b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vis[0] = true;
    dfs(0);

    while(Q--){
        int V, K; cin >> V >> K;
        --V;
        auto pq = v[V];
        while(pq.size() > K) pq.pop();
        cout << pq.top() << "\n";
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
