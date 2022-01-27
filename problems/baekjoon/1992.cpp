#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int N;
char arr[100][100]{};

void divcon(int y, int x, int n){
    
    int val = arr[y][x];
    int flag = 0;
    for(int i=y; i<y+n; ++i){
        for(int j=x; j<x+n; ++j){
            if(arr[i][j] != val){
                flag = 1;
                break;
            }
        }
        if (flag == 1) break;
    }
    if(flag == 0){
        cout << val - '0';
        return;
    }

    cout << "(";
    divcon(y, x, n/2);
    divcon(y, x+n/2, n/2);
    divcon(y+n/2, x, n/2);
    divcon(y+n/2, x+n/2, n/2);
    cout << ")";

}

void solve(){
    cin >> N;
    for(int i=0; i<N; ++i){
        cin >> arr[i];
    }

    divcon(0, 0, N); cout << "\n";
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
