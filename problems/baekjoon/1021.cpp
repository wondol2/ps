#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N >> M;
    queue<int> q;
    for(int i=1; i<=N; ++i) q.push(i);

    int ans = 0;
    for(int i=0; i<M; ++i){
        int obj; cin >> obj;

        int cnt = 0;
        while(!q.empty()){
            if(q.front() == obj){
                q.pop();
                break;
            }
            q.push(q.front()); q.pop();
            ++cnt;
        }
        ans += min(cnt, (int)q.size()+1-cnt);
    }
    cout << ans << "\n";
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
