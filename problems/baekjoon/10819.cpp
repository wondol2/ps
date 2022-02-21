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

vector<int> v;
int vis[8];
int N;
int arr[8];
int ans;

int cal(){
    int ret = 0;
    for(int i=1; i<N; ++i){
        ret += abs(v[i] - v[i-1]);
    }
    return ret;
}


void dfs(){
    if((int)v.size() == N){
        ans = max(ans, cal());
    }
    for(int i=0; i<N; ++i){
        if(vis[i]) continue;

        v.push_back(arr[i]);
        vis[i] = 1;
        dfs();
        vis[i] = 0;
        v.pop_back();
    }
}


void solve(){
    cin >> N;
    for(int i=0; i<N; ++i) cin >> arr[i];

    dfs();
    cout << ans << "\n";
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
