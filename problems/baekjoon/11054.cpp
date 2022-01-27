#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int arr[N+2];
    int incdp[N+2] = {0, };
    int decdp[N+2] = {0, };
    int comdp[N+2] = {0, };
    for(int i=1; i<=N; ++i) cin >> arr[i];
    arr[0] = 0; arr[N+1] = 0;
    
    for(int i=1; i<=N; ++i){
        for(int j=0; j<i; ++j){
            if(arr[i] > arr[j]){
                incdp[i] = max(incdp[i], incdp[j]+1);
            }
        }
    }

    for(int i=N; i>=1; --i){
        for(int j=N+1; j>i; --j){
            if(arr[i] > arr[j]){
                decdp[i] = max(decdp[i], decdp[j]+1);
            }
        }
    }
    for(int i=1; i<=N; ++i) comdp[i] = incdp[i] + decdp[i] - 1;
    // cout << incdp[1] << " " << decdp[1] << " " << comdp[1] << "\n";

    cout << *max_element(comdp+1, comdp+N+1) << "\n";

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
