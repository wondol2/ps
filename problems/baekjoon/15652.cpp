#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int N, M;
vector<int> v;

void backtracking(int n, int m){ // from n , choose m
    if(m == 0){
        for(auto x: v)
            cout << x << " ";
        cout << "\n";
        return;
    }
    for(int i=n; i<=N; ++i){
        v.push_back(i);
        backtracking(i, m-1);
        v.pop_back();
    }
}

void solve(){
    cin >> N >> M;

    backtracking(1, M);
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
