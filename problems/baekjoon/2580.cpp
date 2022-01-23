#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int N = 9;
int arr[10][10];
vector<pair<int, int>> zerovec;
int flag = 0;

vector<int> possible(pair<int, int> p){
    int y = p.first, x = p.second;
    int a[10] = {0,};
    for(int i=0; i<N; ++i){
        a[arr[y][i]] = 1;
        a[arr[i][x]] = 1;
    }
    int ystart = (y/3)*3, xstart = (x/3)*3;
    for(int i=ystart; i<ystart+3; ++i){
        for(int j=xstart; j<xstart+3; ++j){
            a[arr[i][j]] = 1;
        }
    }
    vector<int> ret;
    for(int i=1; i<=N; ++i){
        if(!a[i]) ret.push_back(i);
    }
    return ret;
}

void backtrack(int idx){
    if(idx == zerovec.size()){
        flag = 1;
        return;
    }
    pair<int, int> p = zerovec[idx];
    vector<int> v = possible(p);
    for(auto vv : v){
        arr[p.first][p.second] = vv;
        backtrack(idx+1);
        if(flag == 1) return;
        arr[p.first][p.second] = 0;
    }
}

void solve(){
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            cin >> arr[i][j];
            if(!arr[i][j]) zerovec.push_back({i,j});
        }
    }

    backtrack(0);

    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
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
