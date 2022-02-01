#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int arr[N+1]{};
    for(int i=1; i<=N; ++i) cin >> arr[i];

    int dp[N+1][N+1]{};
    for(int i=1; i<=N; ++i){ // idx
        for(int j=0; j<=N; ++j){ // weight
            dp[i][j] = dp[i-1][j];
            if(j-i*1 >=0) dp[i][j] = max(dp[i][j], dp[i][j-i*1] + 1*arr[i]);
            if(j-i*j >=0) dp[i][j] = max(dp[i][j], dp[i][j-i*j] + j*arr[i]);
        }
    }

    cout << dp[N][N] << "\n";
}

void solution(){
	int N; cin >> N;
	vector<int> card(N+1,0);

	for (int i=1; i<=N; ++i) cin >> card[i];

	int cost, max_cost;
	for(int i=1; i<=N; ++i){
		max_cost = card[i];
		for(int j=1; j<=i/2; ++j) {
			cost = card[i-j] + card[j];
            cout << i << " " << j << " " << cost << "\n";
            max_cost = max(max_cost, cost);
		}
		card[i] = max_cost;
	}
    debug(card)
    cout << card[N] << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T;
    // while(T--){ solve(); }
    solution();
    return 0;
}
