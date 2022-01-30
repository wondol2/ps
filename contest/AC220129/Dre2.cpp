#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    vector<int> a1(N), a2(N);
    for(int i=0; i<N; ++i) cin >> a1[i];
    for(int i=0; i<N; ++i) cin >> a2[i];

    int minval = *min_element(a1.begin(), a1.end());
    int y = INT_MAX;
    for(int i=0; i<N; ++i){
        if(a1[i] == minval)
            y = min(y, a2[i]);
    }
    if(y <= minval){
        cout << minval << " " << y << "\n";
        return;
    }

    vector<int> ans;
    for(int i=0; i<N; ++i){
        while(!ans.empty() && a1[ans.back()] > a1[i]) ans.pop_back();
        ans.push_back(i);
    }

    int by = a2[ans.front()];
    int flag = 0;
    for(int i=1; i<(int) ans.size(); ++i){
        int idx = ans[i];
        if(a1[idx] > by) break;

        if(a2[idx] != by){
            flag = a2[idx] > by;
            break;
        }
    }

    while(!ans.empty() && a1[ans.back()] > (flag ? by : by-1)) ans.pop_back();

    for(auto x : ans) cout << a1[x] << " ";
    for(auto x : ans) cout << a2[x] << " ";
    cout << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
