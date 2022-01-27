#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

long long N, M;

long long** multi_mat(long long** a, long long** b){
    long long** arr;
    arr = new long long *[N];

    for(int i=0; i<N; ++i){
        arr[i] = new long long[N]{};
        for(int j=0; j<N; ++j){
            for(int k=0; k<N; ++k){
                arr[i][j] += a[i][k] * b[k][j] % 1000;
                arr[i][j] %= 1000;
            }
        }
    }
    return arr;
}

long long** divcon(long long** arr, long long m){
    // cout << "m: " << m << "\n";
    if(m == 1){
        return arr;
    }
    if(m&1){
        long long **k = divcon(arr, (m-1)/2);
        return multi_mat(multi_mat(k, k), arr);
    }
    else{
        long long **k = divcon(arr, m/2);
        return multi_mat(k, k);
    }
}

void solve(){
    cin >> N >> M;
    long long** arr;
    arr = new long long *[N];

    for(int i=0; i<N; ++i){
        arr[i] = new long long[N]{};
        for(int j=0; j<N; ++j){
            cin >> arr[i][j];
            arr[i][j] %= 1000;
        }
    }

    long long** ans = divcon(arr, M);
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
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
