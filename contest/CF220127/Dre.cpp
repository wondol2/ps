#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

// https://codeforces.com/contest/1630/problem/B

int N, K;

// bool check_possible(int start, int end, int printing){
//     int cnt = 0, incnt = 0, outcnt = 0;
//     int lastidx = 0;
//     for(int i=0; i<N; ++i){
//         if(arr[i] >= start && arr[i] <= end) ++incnt;
//         else ++outcnt;

//         if(incnt > outcnt && cnt < K-1){
//             ++cnt;
//             incnt = outcnt = 0;
//             if(printing) cout << lastidx+1 << " " << i+1 << "\n";
//             lastidx = i+1;
//         }
//     }
//     if(incnt > outcnt && cnt < K) ++cnt;
//     if(printing) cout << lastidx+1 << " " << N << "\n";
//     return cnt == K;
// }

void solve(){
    cin >> N >> K;
    int s = INT_MAX, e = 0;
    vector<int> arr(N);

    for(int i=0; i<N; ++i){
        cin >> arr[i];
        // s = min(s, arr[i]);
        // e = max(e, arr[i]);
    }
    auto brr = arr;
    sort(brr.begin(), brr.end());
    // brr.resize(unique(brr.begin(), brr.end()) - brr.begin());
    // s = 0, e = brr.size()-1;

    int in = (N + K + 1) / 2;
    int x = -1, y = N + 1;
    debug(in)
    debug(brr)
    for (int i = 0; i <= N - in; i++) {
        int L = brr[i];
        int R = brr[i + in - 1];
        cout << "idxs: " << i << " " << i+in-1 << "\n";
        cout << R << " " << L << " " << x << " " << y << "\n";
        if (R - L < y - x) {
            x = L;
            y = R;
        }
    }

    cout << x << " " << y << '\n';

    // int finalx = s, finaly = e;
    // check_possible(finalx, finaly, 1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T=1;
    cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
