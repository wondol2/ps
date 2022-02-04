#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, S; cin >> N >> S;
    int arr[N];
    for(int i=0; i<N; ++i) cin >> arr[i];

    int ans = N+1;
    int sum = arr[0];

    for(int i=0,j=1; i<N&&j<=N;){
        if(j<N && sum < S){
            sum += arr[j++];
        }
        else if(sum >= S){
            ans = min(ans, j-i);
            sum -= arr[i++];
        }
        else{ // j>=N && sum < S
             break;
        }
    }

    if(ans == N+1) ans = 0;
    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
