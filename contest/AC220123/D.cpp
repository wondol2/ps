#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

vector<pair<int, int>> team;
int N;
int max_val = 0;
int arr[20][20];
int vis[20];
void sol(int n){
    if(n == 0){
        int val = 0;
        for(int i=0; i<N; ++i){
            val ^= arr[team[i].first][team[i].second];
        }
        max_val = max(max_val, val);
        return;
    }
    int start = 0;
    for(start=0; start<2*N; ++start){
        if(vis[start] == 0) break;
    }
    for(int j=start+1; j<2*N; ++j){
        if(vis[j] == 0){
            team.push_back({start, j});
            vis[start] = 1; vis[j] = 1;
            sol(n-1);
            vis[start] = 0; vis[j] = 0;
            team.pop_back();
        }
    }
}

void solve(){
    cin >> N;
    for(int i=0; i<2*N-1; ++i){
        for(int j=i+1; j<=2*N-1; ++j){
            cin >> arr[i][j];
        }
    }

    sol(N);
    cout << max_val << "\n";
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
