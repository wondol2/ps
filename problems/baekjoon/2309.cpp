#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N=9;
    int arr[N];
    for(int i=0; i<N; ++i) cin >> arr[i];
    sort(arr, arr+N);
    int sum = accumulate(arr, arr+N, 0);

    for(int i=0; i<N; ++i){
        for(int j=i; j<N; ++j){
            if(i==j) continue;

            if(sum - arr[i] - arr[j] == 100){
                for(int k=0; k<N; ++k){
                    if(k != i && k != j)
                        cout << arr[k] << "\n";
                }
                return;
            }
        }
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
