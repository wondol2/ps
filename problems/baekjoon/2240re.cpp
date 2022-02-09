#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

int dp[1001][31][2];
int N, M;
int arr[1001];

int f(int n, int w, int t){
    if(w < 0) return -987654321;
    if(n == N) return 0;

    int &ret = dp[n][w][t];
    if(ret != -1) return ret;

    if(t == arr[n]){
        ret = max(ret, 1 + f(n+1, w, t));
    }
    else{
        ret = max(ret, f(n+1, w, t));
        ret = max(ret, 1 + f(n+1, w-1, !t));
    }
    return ret;
}

void solve(){
    memset(dp, -1, sizeof(dp));
    cin >> N >> M;
    for(int i=0; i<N; ++i){
        cin >> arr[i];
        arr[i] = (arr[i] == 2);
    }

    cout << f(0, M, 0) << "\n";
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
