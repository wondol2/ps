#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif


void solve(){
    int N, K; cin >> N >> K;
    vector<int> arr(N);
    for(int i=0; i<N; ++i) cin >> arr[i];

    sort(arr.begin(), arr.end());
    arr.resize(unique(arr.begin(), arr.end()) - arr.begin());

    vector<int> brr;
    int pre = arr[0];
    for(int i=1; i<(int) arr.size(); ++i){
        brr.push_back(arr[i] - pre);
        pre = arr[i];
    }
    sort(brr.begin(), brr.end(), __greater());

    int ans = arr[arr.size()-1] - arr[0];
    for(int i=0; i<min(K-1, (int)brr.size()); ++i){
        ans -= brr[i];
    }
    cout << ans << "\n";
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
