#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

bool isPrime[2001];

void preprocess(){
    for(int i=2; i<=2000; ++i){
        if(!isPrime[i]) continue;
        for(int j=2*i; j<=2000; j+=i) isPrime[j] = false;
    }
}

int N;
int arr[51];
bool vis[51];
int match[51];
vector<vector<int>> v(51);

bool dfs(int n){
    if(vis[n]) return true;
    for(int i=0; i < (int) v[n].size(); ++i){
        int x = v[n][i];
        if(vis[x]) continue;

        vis[x] = true;
        if(match[x] == -1 || dfs(match[x])){
            match[x] = n;
            return true;
        }
    }
    return false;
}

void solve(){
    cin >> N;
    for(int i=0; i<N; ++i) cin >> arr[i];
    for(int i=0; i<N; ++i) v[i].clear();

    for(int i=0; i<N; ++i){
        for(int j=i+1; j<N; ++j){
            if(isPrime[arr[i] + arr[j]]){
                v[i].push_back(j);
                v[j].push_back(i);
            }
        }
    }
    vector<int> ans;

    // Bipartite Matching
    for(int k=0; k<(int)v[0].size(); ++k){
        memset(match, -1, sizeof(match));

        match[0] = v[0][k];
        match[v[0][k]] = 0;

        bool isAnswer = true;
        for(int i=0; i<N; ++i){
            memset(vis, 0, sizeof(vis));
            vis[0] = 1, vis[v[0][k]] = 1;
            if(!dfs(i)) {isAnswer = false; break;}
        }

        if(isAnswer) ans.push_back(arr[match[0]]);
    }

    if(ans.size() == 0){ cout << "-1\n"; }
    else{
        sort(ans.begin(), ans.end());
        for(auto x: ans) cout << x << " ";
        cout << "\n";
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;

    memset(isPrime, true, sizeof(isPrime));
    preprocess();

    // cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
