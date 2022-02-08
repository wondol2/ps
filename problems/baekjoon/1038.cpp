#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

vector<long long> v;

void dfs(long long n){
    v.push_back(n);
    for(int i=n%10-1; i>=0; --i){
        dfs(n*10+i);
    }
}

void solve(){
    int N; cin >> N;
    for(int i=0; i<10; ++i)
        dfs(i);
    sort(v.begin(), v.end());

    if(N >= v.size()) cout << "-1\n";
    else cout << v[N] << "\n";
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
