#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> v;

    vector<int> cnt (100001, 0);

    for(int i=(n-1)/2; i<=n/2; i++){
        for(int j=(m-1)/2; j<=m/2; j++){
            v.push_back({i,j});
        }
    }
    int val = 0;
    for(int k=0; k<v.size(); k++){
        val = max(val, v[k].first + v[k].second);
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int mini = INT_MAX;
            for(int k=0; k<v.size(); k++){
                mini = min(mini, abs(v[k].first - i) + abs(v[k].second - j));
            }
            cnt[mini]++;
        }
    }
    for(int i=0; i<max(n,m); i++){
        for(int j=0; j<cnt[i]; j++){
            cout << val << " ";
        }
        val ++ ;
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
