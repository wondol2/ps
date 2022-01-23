#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    vector<int> arr(N);
    vector<int> cnt(N+1);
    for(int i=0; i<N; ++i){
        cin >> arr[i];
        ++cnt[arr[i]];
    }

    int start = 0;
    vector<int> ret;
    while(start < N){
        int mex = 0;
        while(cnt[mex] > 0) ++mex;

        vector<bool> vis(mex, false);
        int temp = 0;
        while(start < N){
            if(arr[start] < mex && !vis[arr[start]]){
                ++temp;
                vis[arr[start]] = true;
            }
            --cnt[arr[start]];
            ++start;
            if(temp == mex) break;
        }
        ret.push_back(mex);
    }

    cout << ret.size() << "\n";
    for(auto x: ret) cout << x << " ";
    cout << "\n";
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
