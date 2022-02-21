#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

const int NUM = 10000;


void solve(){
    int N, K; cin >> N >> K;

    long long arr[N];
    for(int i=0; i<N; ++i) cin >> arr[i];
    if(accumulate(arr, arr+N, 0LL)%K != 0){
        cout << "blobsad\n"; return;
    }

    for(int i=0; i<N; ++i) arr[i] %= K;

    long long ans = 0;
    int sIdx = 0;
    int median = -1;
    long long sum = 0;
    for(int i=0; i<N; ++i){
        if(median == -1 && sum + arr[i] >= (K+1)/2){
            median = i;
        }
        if(sum + arr[i] >= K){
            // debug(median)
            for(int j=sIdx; j<i; ++j){
                ans += abs(median-j)*arr[j];
            }
            ans += abs(median-i)*(K-sum);

            arr[i] -= (K-sum);
            sum = 0;
            sIdx = i;
            median = -1;
            --i;
        }
        else{
            sum += arr[i];
        }
    }

    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
