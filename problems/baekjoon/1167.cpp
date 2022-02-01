#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

// Need to try one more

const int NUM = 100001;
struct node{int v; int d;};
int N;
vector<node> graph[NUM];
vector<node> tree[NUM];
pair<int,int> dp[NUM]; // 0 : just maximum, 1 : connected with parent

pair<int,int> sol(int root){
    pair<int,int> &ret = dp[root];

    if(ret.first != 0) return ret;
    ret = {0,0};
    
    vector<int> seconds;
    for(int i=0; i < (int) tree[root].size(); ++i){
        node child = tree[root][i];
        auto child_sol = sol(child.v);
        seconds.push_back(child_sol.second+child.d);
        ret.first = max(ret.first, child_sol.first);
    }
    sort(seconds.begin(), seconds.end());
    int seconds_size = (int) seconds.size();
    if(seconds_size > 0) ret.second = max(ret.second, seconds[seconds_size-1]);
    ret.first = max(ret.first, ret.second);
    if(seconds_size > 1){
        ret.first = max(ret.first, 
                        seconds[seconds_size-1]+seconds[seconds_size-2]);
    }

    return ret;
}


void solve(){
    cin >> N;
    for(int i=0; i<N; ++i){
        int vertex; cin >> vertex;
        while(true){
            int v; cin >> v;
            if(v == -1) break;
            int d; cin >> d;
            graph[vertex].push_back({v, d});
        }
        
    }

    int vis[N+1]{};
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    while(!q.empty()){
        int num = q.front();
        for(int i=0; i<(int) graph[num].size(); ++i){
            node n = graph[num][i];
            if(!vis[n.v]){
                q.push(n.v);
                vis[n.v]=1;
                tree[num].push_back(n);
            }
        }
        q.pop();
    }

    cout << sol(1).first << "\n";
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
