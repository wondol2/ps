#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, K; cin >> N >> K;
    if(N==4 && K==3){
        cout << "-1\n"; return;
    }
    else if(K == 0){
        for(int i=0; i<N/2; ++i){
            cout << i << " " << N-i-1 << "\n";
        }
    }
    else if(K == N-1){
        cout << N-1 << " " << N-2 << "\n";
        cout << 1 << " " << 3 << "\n";
        cout << 0 << " " << N-4 << "\n";
        for(int i=0; i<N/2; ++i){
            if(i != 0 && i != 1 && i != 3){
                cout << i << " " << N-i-1 << "\n";
            }
        }
    }
    else{
        cout << K << " " << N-1 << "\n";
        cout << N-1-K << " " << 0 << "\n";
        for(int i=1; i<N/2; ++i){
            if(i != K && i != N-1-K) cout << i << " " << N-i-1 << "\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T=1;
    cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
