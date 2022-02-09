#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

int T, W;
vector<pair<int,int>> v;

int dp[1001][31][2];

int sol(int n, int w, int t){
    if(w < 0) return -987654321;
    if(n >= v.size()) return 0;

    int &ret = dp[n][w][t];
    if(ret != -1) return ret;
    ret = 0;

    for(int i=n; i<(int) v.size(); ++i){
        if(v[i].first == t) ret = max(ret, v[i].second + sol(i+1,w,t));
        if(v[i].first != t){
            ret = max(ret, v[i].second + sol(i+1,w-1,!t));
            ret = max(ret, sol(i+1,w,t));
        }
    }
    return ret;
}

void solve(){
    memset(dp, -1, sizeof(dp));
    
    cin >> T >> W;
    int cnt = 1;
    int lastNum; cin >> lastNum;

    for(int i=1; i<T; ++i){
        int num; cin >> num;
        if(num == lastNum) ++cnt;
        if(num != lastNum){
            v.push_back({lastNum-1, cnt});
            cnt = 1;
            lastNum = num;
        }
    }
    v.push_back({lastNum-1, cnt});

    cout << sol(0, W, 0) << "\n";
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
