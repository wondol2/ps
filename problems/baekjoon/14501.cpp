#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


int N;
vector<pair<int,int>> arr(15);
vector<pair<int,int>> v;
int ans;

void dfs(int n){
    if(n >= N){
        int val = 0;
        for(int i=0; i<(int)v.size(); ++i){
            val += v[i].second;
        }
        ans = max(ans, val);
    }
    for(int i=n; i<N; ++i){
        if(i+arr[i].first <= N) v.push_back(arr[i]);
        dfs(i+arr[i].first);
        if(i+arr[i].first <= N) v.pop_back();
    }
}

void solve(){
    cin >> N;
    for(int i=0; i<N; ++i) cin >> arr[i].first >> arr[i].second;

    dfs(0);
    cout << ans << "\n";
}

void solve2(){
    int n, nxt[22], cst[22], dp[22];

    cin >> n;
	for(int i=0; i<n; i++){
		cin >> nxt[i] >> cst[i];
		nxt[i] += i;
	}
	for(int i=n-1; i>=0; i--){
		dp[i] = dp[i+1];
		if(nxt[i] <= n) dp[i] = max(dp[i], dp[nxt[i]] + cst[i]);
	}
	cout << dp[0] << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
