#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    char arr[50][50] = {0, };
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    r -= 1; c -= 1;

    if(arr[r][c] == 'B'){
        cout << 0 << '\n';
    }
    else{
        int all_white = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j] == 'B'){
                    all_white = 0; break;
                }
            }
        }
        if(all_white == 1) cout << -1 << '\n';

        else{
            int can_one = 0;
            for(int i=0; i<n; i++){
                if(arr[i][c] == 'B'){
                    can_one = 1; break;
                }
            }
            for(int i=0; i<m; i++){
                if(arr[r][i] == 'B'){
                    can_one = 1; break;
                }
            }
            if(can_one == 1) cout << 1 << '\n';
            else cout << 2 << '\n';
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
