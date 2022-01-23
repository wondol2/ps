#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int arr[200001];
    for(int i=0; i<N; ++i){
        cin >> arr[i];
    }
    int x = -1;

    for(int i=1; i<N; ++i){
        if(arr[i-1] > arr[i]){
            x = arr[i-1];
            break;
        }
    }
    int vis[200001] = {0,};
    if(x == -1){
        for(int i=0; i<N; ++i){
            if(vis[i] == 0){
                x = arr[i];
                vis[i] = 1;
            }
        }
    }

    for(int i=0; i<N; ++i){
        if(arr[i] != x){
            cout << arr[i] << " ";
        }
    }
    cout << "\n";


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
