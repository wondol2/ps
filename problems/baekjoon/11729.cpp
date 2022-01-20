#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

vector<pair<int, int>> v;
int hanoi(int n, int x, int y){ // x to y
    if(n == 1){
        v.push_back({x, y});
        return 1;
    }
    int ret = 0;
    ret += hanoi(n-1, x, 6-(x+y));
    ret += hanoi(1, x, y);
    ret += hanoi(n-1, 6-(x+y), y);
    return ret;
}

void solve(){
    int N; cin >> N;
    cout << hanoi(N, 1, 3) << "\n";
    for(auto x : v){
        cout << x.first << " " << x.second << "\n";
    }
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
