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

    arr[0] = 987654321;
    int dp[N+1]{};

    for(int i=1; i<=N; ++i){
        for(int j=0; j<i; ++j){
            if(arr[i] < arr[j]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    cout << *max_element(dp, dp+N+1) << "\n";
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
