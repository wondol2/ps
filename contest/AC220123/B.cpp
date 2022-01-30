#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N;
    cin >> N;
    int arr[N+3] = {0,};
    int n ;
    for(int i=0; i<4*N-1; ++i){
        cin >> n;
        ++arr[n];
    }
    for(int i=1; i<=N; ++i){
        if(arr[i] != 4){
            cout << i << "\n";
        }
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
