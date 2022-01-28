#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

struct matrix{long long a[2][2];};
matrix operator*(matrix a, matrix b);
// https://www.acmicpc.net/source/1087734

long long M = 1000000007;

long long** multiplyMatrix(long long** a, long long** b){
    long long** arr = new long long*[2];
    for(int i=0; i<2; ++i){
        arr[i] = new long long[2];
        for(int j=0; j<2; ++j){
            for(int k=0; k<2; ++k){
                arr[i][j] += (a[i][k] * b[k][j]) % M;
            }
            arr[i][j] %= M;
        }
    }
    return arr;
}

long long** divcon(long long** arr, long long n){
    if(n == 1) return arr;
    if(n&1){
        long long **t = divcon(arr, (n-1)/2);
        return multiplyMatrix(multiplyMatrix(t, t), arr);
    }
    else{
        long long **t = divcon(arr, n/2);
        return multiplyMatrix(t, t);
    }
}


void solve(){
    long long N; cin >> N;

    if(N == 0) {cout << "0\n"; return;}
    if(N == 1) {cout << "1\n"; return;}

    long long** arr = new long long*[2];
    for(int i=0; i<2; ++i) arr[i] = new long long[2];
    arr[0][0] = 1, arr[0][1] = 1;
    arr[1][0] = 1, arr[1][1] = 0;

    long long** ans = divcon(arr, N-1);
    cout << (ans[0][0])%M << "\n";
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
