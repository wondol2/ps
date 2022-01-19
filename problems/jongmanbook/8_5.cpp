#include <bits/stdc++.h>
using namespace std;

// #ifndef ONLINE_JUDGE
// #include "debug.h"
// #else
// #define debug(x)
// #endif

int N, M;
int a1[101];
int a2[101];
int dp[102][102];

int jlis(int s1, int s2){
    int &ret = dp[s1+1][s2+1];
    if(ret != -1) return ret;
    ret = 2;

    long long maxElement = 
        max(s1==-1?LONG_LONG_MIN:a1[s1], s2==-1?LONG_LONG_MIN:a2[s2]);
    for(int i=s1+1; i<N; ++i){
        // if(maxElement < a1[i]){
        if((s1 == -1 && s2==-1)
            || (s1 == -1 && a1[i] > a2[s2])
            || (s2 == -1 && a1[i] > a1[s1])
            || (a1[i] > a1[s1] && a1[i] > a2[s2])){
            ret = max(ret, jlis(i, s2)+1);
        }
    }
    for(int i=s2+1; i<M; ++i){
        // if(maxElement < a2[i]){
        if((s1 == -1 && s2==-1)
            || (s1 == -1 && a2[i] > a2[s2])
            || (s2 == -1 && a2[i] > a1[s1])
            || (a2[i] > a1[s1] && a2[i] > a2[s2])){
            ret = max(ret, jlis(s1, i)+1);
        }
    }
    return ret;
}

void solve(){
    cin >> N >> M;
    // memset(dp, -1, 101*101*4);
    for(int i=0; i<102; ++i){
        for(int j=0; j<102; ++j){
            dp[i][j] = -1;
        }
    }
    for(int i=0; i<N; ++i) cin >> a1[i];
    for(int i=0; i<M; ++i) cin >> a2[i];

    int ans = jlis(-1, -1) - 2;
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
