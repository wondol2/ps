#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int arr[128][128]{};
int white = 0;
int blue = 0;
void divcon(int y, int x, int n){
    int color = arr[y][x];
    int i=0, j=0;
    int flag = 0;
    for(i=y; i<y+n; ++i){
        for(j=x; j<x+n; ++j){
            if(arr[i][j] != color){
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }
    if(flag == 0){
        color ? ++blue : ++white;
        return;
    }

    divcon(y, x, n/2);
    divcon(y+n/2, x, n/2);
    divcon(y, x+n/2, n/2);
    divcon(y+n/2, x+n/2, n/2);
}

void solve(){
    int N; cin >> N;
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j)
            cin >> arr[i][j];
    }
    divcon(0, 0, N);

    cout << white << "\n" << blue << "\n";
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
