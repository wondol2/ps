#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int N;
int arr[13];
vector<int> v;

void dfs(int n){
    if(v.size() == 6){
        for(auto x: v){
            cout << x << " ";
        }
        cout << "\n";
        return;
    }

    for(int i=n; i<N; ++i){
        v.push_back(arr[i]);
        dfs(i+1);
        v.pop_back();
    }
}

void solve(){
    while(true){
        cin >> N;
        if(N == 0) return;

        for(int i=0; i<N; ++i) cin >> arr[i];

        dfs(0);
        cout << "\n";
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
