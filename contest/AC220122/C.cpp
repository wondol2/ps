#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int H, W, K; cin >> H >> W >> K;
    int A[200001], B[200001];
    long long asum = 0, bsum = 0;
    for(int i=0; i<H; ++i){
        cin >> A[i];
        asum += A[i];
    }    
    for(int i=0; i<W; ++i){
        cin >> B[i];
        bsum += B[i];
    }
    if(asum%K != bsum%K){
        cout << "-1" << "\n";
        return;
    }

    long long total = 1LL * (K-1) * H * W;
    long long cnt1 = 0, cnt2 = 0;
    // assume that all squares are fill with (K-1)
    // in terms of row, column
    // caculate value to decrease from total
    // final decreasing value is max(cnt1, cnt2)

    for(int i=0; i<H; ++i){
        cnt1 += (1LL * (K-1) * W - A[i]) % K;
        if(cnt1 < 0) cnt1 += K;
    }
    for(int i=0; i<W; ++i){
        cnt2 += (1LL * (K-1) * H - B[i]) % K;
        if(cnt2 < 0) cnt2 += K;
    }
    cout << total << " " << asum << " " << bsum << " " << cnt1 << " " << cnt2 << "\n";
    cout << total - max(cnt1, cnt2) << "\n";
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
