#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M;
    cin >> N >> M;
    vector<int> distances;
 
    for (int r = 0; r < N; r++)
        for (int c = 0; c < M; c++) {
            int dist = max(r, N - 1 - r) + max(c, M - 1 - c);
            distances.push_back(dist);
        }
 
    sort(distances.begin(), distances.end());
    debug(distances);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
