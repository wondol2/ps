#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int N;
int H[100000];

long long divcon(int s, int e){ // s <= x < e
    if(s == e) return 0;
    if(s == e-1) return H[s];
    
    int mid = (s-e)/2+e;
    long long ret = max(divcon(s, mid), divcon(mid, e));

    int l=mid-1, r=mid;
    int h = H[l];
    while(s <= l && r <= e){
        if(r == e || (s < l && H[l-1] >= H[r])){
            --l;
            h = min(h, H[l]);
        }
        else{
            ++r;
            h = min(h, H[r-1]);
        }
        ret = max(ret, (long long)h*(r-l));
    }
    return ret;
}


void solve(){
    while(true){
        cin >> N;
        if(N == 0) return;

        for(int i=0; i<N; ++i) cin >> H[i];
        cout << divcon(0, N) << "\n";
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
