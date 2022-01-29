#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    pair<int, int> arr[N];
    for(int i=0; i<N; ++i) cin >> arr[i].second >> arr[i].first;
    sort(arr, arr+N);

    int cnt = 0;
    int fintime = -1;
    for(int i=0; i<N; ++i){
        if(arr[i].first >= fintime && arr[i].second >= fintime){
            fintime = arr[i].first;
            // cout << arr[i].second << " " << arr[i].first << "\n";
            ++cnt;
        }
    }

    cout << cnt << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
