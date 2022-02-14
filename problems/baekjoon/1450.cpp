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
    int N, C; cin >> N >> C;
    long long arr[N];
    for(int i=0; i<N; ++i) cin >> arr[i];

    sort(arr, arr+N, __greater());

    long long ans = 0;
    // long long sum = 0;
    for(int i=0; i<N; ++i){
        int j=i;
        long long sum = 0;
        

    }


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
