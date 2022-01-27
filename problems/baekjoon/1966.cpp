#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N >> M;
    queue<pair<int,int>> q; // idx, priority
    for(int i=0; i<N; ++i){
        int a; cin >> a;
        q.push({i,a});
    }
    
    int cnt = 1;
    while(!q.empty()){
        int qsize = q.size();
        pair<int, int> qf = q.front();

        q.push(qf); q.pop();
        while(--qsize){
            if(qf.second < q.front().second){
                break;
            }
            q.push(q.front()); q.pop();
        }
        if(qsize==0){
            if(qf.first == M){
                cout << cnt << "\n";
                return;
            }
            ++cnt;
            q.pop();
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T=1;
    cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
