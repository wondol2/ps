#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


// https://www.acmicpc.net/problem/1436
void solve(){
    int N; cin >> N;
    int num =0;
    for(num=666; ; ++num){
        int temp = num;
        while(temp > 0){
            if(temp % 1000 == 666){
                --N;
                break;
            }
            temp /= 10;
        }
        if(N == 0) break;
    }
    cout << num << "\n";
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
