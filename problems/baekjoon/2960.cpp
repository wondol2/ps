#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, K; cin >> N >> K;
    int cnt = 0;
    int vis[N+1]{};
    for(int i=2; i<=N; ++i){
        if(!vis[i]){
            int j = i;
            while(j <= N){
                if(!vis[j]){
                    vis[j] = 1;
                    if(++cnt == K){
                        cout << j << "\n";
                        return;
                    }
                }
                j += i;
            }
        }
    }
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
