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

    vector<pair<int, int>> v = {{0,0}, {0,m-1}, {n-1,0}, {n-1,m-1}};
    vector<int> cnt;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int maxi = 0;
            for(int k=0; k<v.size(); k++){
                maxi = max(maxi, abs(v[k].first-i) + abs(v[k].second-j));
            }
            cnt.push_back(maxi);
        }
    }
    sort(cnt.begin(), cnt.end());
    for(int i=0; i<cnt.size(); i++){
        cout << cnt[i] << ' ';
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
