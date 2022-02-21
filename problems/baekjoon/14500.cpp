#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

const int NUM = 10000;

vector<vector<pair<int,int>>> D[5];

void preprocess(){
    D[0] = {
        {{0,0},{0,1},{0,2},{0,3}},
        {{0,0},{1,0},{2,0},{3,0}},
    };
    D[1] = {
        {{0,0},{0,1},{1,1},{1,0}}
    };
    D[2] = {
        {{0,0},{0,1},{0,2},{-1,2}},
        {{0,0},{1,0},{2,0},{2,1}},
        {{0,0},{-1,0},{-1,1},{-1,2}},
        {{0,0},{-1,0},{-2,0},{-2,-1}},

        {{0,0},{0,1},{-1,1},{-2,1}},
        {{0,0},{-1,0},{-1,-1},{-1,-2}},
        {{0,0},{0,-1},{1,-1},{2,-1}},
        {{0,0},{1,0},{1,1},{1,2}},
    };
    D[3] = {
        {{0,0},{0,1},{-1,1},{-1,2}},
        {{0,0},{1,0},{1,1},{2,1}},
        {{0,0},{-1,0},{-1,1},{-2,1}},
        {{0,0},{0,1},{1,1},{1,2}},
    };
    D[4] = {
        {{0,0},{0,-1},{0,1},{1,0}},
        {{0,0},{0,-1},{0,1},{-1,0}},
        {{0,0},{-1,0},{1,0},{0,1}},
        {{0,0},{-1,0},{1,0},{0,-1}}
    };
}

void solve(){
    preprocess();

    int N, M; cin >> N >> M;
    int arr[N][M];
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            cin >> arr[i][j];
        }
    }
    int ans = 0;
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            for(int k=0; k<5; ++k){
                for(int n=0; n < (int)D[k].size(); ++n){
                    int num = 0;
                    for(int m=0; m<4; ++m){
                        int y = i+D[k][n][m].first;
                        int x = j+D[k][n][m].second;
                        if(y<0 || y>=N || x<0 || x>=M){
                            num = -1; break;
                        }
                        num += arr[y][x];
                    }
                    ans = max(ans, num);
                }
            }
        }
    }

    cout << ans << "\n";
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
