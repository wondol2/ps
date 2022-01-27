#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int arr[N];
    for(int i=0; i<N; ++i) cin >> arr[i];

    sort(arr, arr+N);
    int M; cin >> M;
    int num;
    for(int i=0; i<M; ++i) {
        cin >> num;
        cout << upper_bound(arr, arr+N, num) - lower_bound(arr, arr+N, num) << " ";
    }
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
