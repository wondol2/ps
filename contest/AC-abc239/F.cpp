#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

const int NUM = 200001;
int N, M;
int D[NUM];
vector<vector<int>> graph(NUM);
bool vis[NUM]{};
set<int> todo;



void solve(){
    cin >> N >> M;
    for(int i=0; i<N; ++i) cin >> D[i];

    for(int i=0; i<M; ++i){
        int a, b; cin >> a >> b;
        --a; --b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    if(accumulate(D, D+N, 0) != (N-1)*2) { cout << "-1\n"; return; }

    
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
