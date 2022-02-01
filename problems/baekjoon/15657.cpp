#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int N, M; int arr[8];
vector<int> v;
set<vector<int>> s;
void dfs(){
    if((int)v.size() == M){
        for(int i=1; i<(int)v.size(); ++i){
            if(v[i] < v[i-1]) return;
        }
        s.insert(v);
        return;
    }

    for(int i=0; i<N; ++i){
        v.push_back(arr[i]);
        dfs();
        v.pop_back();
    }
}

void solve(){
    cin >> N >> M;
    for(int i=0; i<N; ++i) cin >> arr[i];
    sort(arr, arr+N);

    dfs();

    for(auto ss:s){
        for(int i=0; i<(int) ss.size(); ++i){
            cout << ss[i] << " ";
        }
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
