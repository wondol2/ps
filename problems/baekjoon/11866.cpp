#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, K; cin >> N >> K;
    queue<int> q;
    for(int i=1; i<=N; ++i) q.push(i);
    int cnt = 0;
    vector<int> v;
    while(!q.empty()){
        ++cnt;
        if(cnt != K){
            q.push(q.front());
            q.pop();
        }
        else{
            v.push_back(q.front());
            q.pop();
            cnt = 0;
        }
    }
    cout << "<" << v.front();
    for(int i=1; i<v.size(); ++i) cout << ", " << v[i];
    cout << ">\n";
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
