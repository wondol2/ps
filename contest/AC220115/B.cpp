#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, H[100001], stand=0;
    cin >> N;
    for (int i=0; i<N; i++){
        cin >> H[i];
    }
    for (int i=1; i<N; i++){
        if(H[stand] < H[i]){
            stand = i;
        }
        else{
            break;
        }
    }
    cout << H[stand] << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
