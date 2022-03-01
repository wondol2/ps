#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

const int NUM = 10000;
int N, M;
int arr[8];
vector<int> v;

void zz(int k){
    
}

void dfs(){
    if(v.size() == M){
        for(auto x: v) cout << x << " ";
        cout << "\n";
        return;
    }
    vector<int> b;
    vector<bool> c;
    vector<bool> d;
    vector<int> g;

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
