#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

struct node{int y; int x;};
int dy[4] = {1,-1,0,0};
int dx[4] = {0,0,1,-1};

void solve(){
    int N, M; cin >> N >> M;
    int arr[N][M];

    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            cin >> arr[i][j];
        }
    }
    int cnt = 0;
    int max_picture = 0;
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            if(arr[i][j] == 1){
                int picture_size = 0;

                queue<node> q;
                q.push({i,j});
                arr[i][j] = 0;
                ++picture_size;

                while(!q.empty()){
                    node n = q.front();

                    for(int i=0; i<4; ++i){
                        int y = n.y + dy[i];
                        int x = n.x + dx[i];
                        if(y<0 || y>=N || x<0 || x>=M) continue;

                        if(arr[y][x] == 1){
                            q.push({y,x});
                            arr[y][x] = 0;
                            ++picture_size;
                        }
                    }
                    q.pop();
                }
                ++cnt;
                max_picture = max(max_picture, picture_size);
            }
        }
    }

    cout << cnt << "\n";
    cout << max_picture << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
