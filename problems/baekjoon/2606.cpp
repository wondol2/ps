#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int K; cin >> K;
    int arr[N][N]{};
    for(int i=0; i<K; ++i) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        arr[a][b] = arr[b][a] = 1;
    }

    int vis[N]{};
    queue<int> q;
    q.push(0);
    vis[0] = 1;
    int cnt = 0;
    while(!q.empty()){
        int num = q.front();
        for(int i=0; i<N; ++i){
            if(!vis[i] && arr[num][i] == 1){
                q.push(i);
                vis[i] = 1;
                ++cnt;
            }
        }
        q.pop();
    }

    cout << cnt << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
