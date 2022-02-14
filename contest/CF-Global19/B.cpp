#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif


void solve(){
    int N; cin >> N;
    int arr[N+1];
    for(int i=1; i<=N; ++i) cin >> arr[i];

    int zeroCnt[N+1]{};
    for(int i=1; i<=N; ++i){
        zeroCnt[i] = zeroCnt[i-1];
        if(arr[i] == 0){
            zeroCnt[i]++;
        }
    }
    
    int ans = 0;
    for(int i=1; i<=N; ++i){
        for(int j=1; j<=N-i+1; ++j){
            ans += i + zeroCnt[j+i-1] - zeroCnt[j-1];
        }
    }
    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
