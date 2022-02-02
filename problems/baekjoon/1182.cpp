#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int N, S;
int arr[21];
vector<int> v;
int cnt = 0;

void dfs(int n){
    int sum = accumulate(v.begin(), v.end(), 0);
    if(v.size()>0 && sum == S) ++cnt;

    for(int i=n; i<N; ++i){
        v.push_back(arr[i]);
        dfs(i+1);
        v.pop_back();
    }
}

void solve(){
    cin >> N >> S;
    for(int i=0; i<N; ++i) cin >> arr[i];

    dfs(0);
    cout << cnt << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
