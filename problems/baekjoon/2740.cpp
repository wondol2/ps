#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int ny, nx; cin >> ny >> nx;
    int A[ny][nx];
    for(int i=0; i<ny; ++i){
        for(int j=0; j<nx; ++j){
            cin >> A[i][j];
        }
    }
    int my, mx; cin >> my >> mx;
    int B[my][mx];
    for(int i=0; i<my; ++i){
        for(int j=0; j<mx; ++j){
            cin >> B[i][j];
        }
    }

    for(int i=0; i<ny; ++i){
        for(int j=0; j<mx; ++j){
            int val = 0;
            for(int k=0; k<nx; ++k){ // nx == my
                val += A[i][k] * B[k][j];
            }
            cout << val << " ";
        }
        cout << "\n";
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
