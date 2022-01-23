#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int team[20];
int N;
int arr[21][21];
int min_val = INT_MAX;


void dfs(int start, int num){
    if(num == 0){
        int a=0, b=0;
        vector<int> ateam;
        vector<int> bteam;
        for(int i=0; i<N; ++i){
            if(team[i] == 0)
                ateam.push_back(i);
            else
                bteam.push_back(i);
        }
        int n = N/2;
        for(int i=0; i<n; ++i){
            for(int j=i+1; j<n; ++j){
                a += arr[ateam[i]][ateam[j]] + arr[ateam[j]][ateam[i]];
                b += arr[bteam[i]][bteam[j]] + arr[bteam[j]][bteam[i]];
            }
        }
        min_val = min(min_val, abs(a-b));
    }
    for(int i=start; i < N; ++i){
        team[i] = 1;
        dfs(i+1, num-1);
        team[i] = 0;
    }
}

void solve(){
    cin >> N;
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            cin >> arr[i][j];
        }
    }
    dfs(0, N/2);
    cout << min_val << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
