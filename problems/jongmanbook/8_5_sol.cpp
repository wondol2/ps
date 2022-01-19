#include <bits/stdc++.h>
using namespace std;

int N, M;
int a1[101], a2[101];
int dp[101][101];

void solve(){
    cin >> N >> M;
    memset(dp, 0, 101*101*4);

    a1[0] = INT_MIN, a2[0] = INT_MIN;
    for(int i=1; i<=N; ++i) cin >> a1[i];
    for(int i=1; i<=M; ++i) cin >> a2[i];

    int ans = 1;
    for(int i=0; i<=N; ++i){
        for(int j=0; j<=M; ++j){
            dp[i][j] = !!(i+j);
            for(int k=0; k<i; ++k){
                if(a1[i] > max(a1[k], a2[j]))
                    dp[i][j] = max(dp[k][j]+1, dp[i][j]);
            }
            for(int k=0; k<j; ++k){
                if(a2[j] > max(a1[i], a2[k]))
                    dp[i][j] = max(dp[i][k]+1, dp[i][j]);
            }
            ans = max(ans, dp[i][j]);
        }
    }
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
