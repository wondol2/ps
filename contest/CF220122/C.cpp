#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int num = 0;
    vector<int> v[200001];
    vector<int> tops(200001, 0);

    for(int i=0; i<N; ++i){
        cin >> num;
        v[num].push_back(i);
    }

    int start = 0;
    vector<int> b;
    while(start < N){
        int mex_max = 0;
        int mex_idx = INT_MIN;
        for(int i=0; i<N; ++i){
            if(tops[i] < (int) v[i].size()){
                mex_max = i+1;
                mex_idx = max(mex_idx, v[i][tops[i]]);
            }
            else break;
        }
        for(int i=0; i<mex_max; ++i){
            tops[i] = upper_bound(v[i].begin(), v[i].end(), mex_idx) - v[i].begin();
        }
        if(mex_idx == INT_MIN) break;
        b.push_back(mex_max);
        start = mex_idx+1;
    }
    for(int i=0; i<N-start; ++i) b.push_back(0);

    cout << b.size() << "\n";
    for(auto x: b) cout << x << " ";
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
