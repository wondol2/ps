#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    long long L[N], B[N];

    for(int i=0; i<N-1; ++i) cin >> L[i];
    for(int i=0; i<N; ++i) cin >> B[i];
    
    B[N-1] = 0;

    long long ans = 0;
    long long b = 0;
    for(int i=0; i<N-1; ++i){
        long long dist = 0;
        for(int j=i+1; j<N; ++j){
            dist += L[j-1];
            if(B[i] >= B[j]){
                if(b >= dist){
                    b -= dist;
                }
                else{
                    long long need = dist-b;
                    ans += need * B[i];
                    b += need - dist;
                }
                i = j-1;
                break;
            }
        }
    }
    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
