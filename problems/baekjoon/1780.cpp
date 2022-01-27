#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int arr[2200][2200]{};
int cnts[3]{};

void divcon(int y, int x, int n){
    int val = arr[y][x];
    int i=0, j=0;
    int flag = 0;
    for(i=y; i<y+n; ++i){
        for(j=x; j<x+n; ++j){
            if(arr[i][j] != val){
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }
    if(flag == 0){
        ++cnts[val];
        return;
    }

    for(int i=0; i<n; i+=(n/3)){
        for(int j=0; j<n; j+=(n/3)){
            divcon(y+i, x+j, n/3);
        }
    }
}

void solve(){
    int N; cin >> N;
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            cin >> arr[i][j];
            ++arr[i][j];
        }
    }
    divcon(0, 0, N);

    for(int i=0; i<3; ++i){
        cout << cnts[i] << "\n";
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
