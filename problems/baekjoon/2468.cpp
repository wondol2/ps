#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

struct node{int y; int x;};
int dy[4] = {-1,1,0,0};
int dx[4] = {0,0,-1,1};

void solve(){
    int N; cin >> N;

    int maxval = 0;
    int arr[N][N];
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            cin >> arr[i][j];
            maxval = max(maxval, arr[i][j]);
        }
    }

    int ans = 1;
    for(int rain=1; rain<maxval; ++rain){
        int brr[N][N]{};
        for(int i=0; i<N; ++i){
            for(int j=0; j<N; ++j){
                brr[i][j] = (arr[i][j] <= rain ? 1 : 0);
            }
        }
        
        int cnt = 0;
        for(int i=0; i<N; ++i){
            for(int j=0; j<N; ++j){
                if(brr[i][j] == 0){
                    queue<node> q;
                    q.push({i,j});
                    brr[i][j] = 1;

                    while(!q.empty()){
                        node n = q.front();
                        for(int k=0; k<4; ++k){
                            int newy = n.y+dy[k], newx = n.x+dx[k];
                            if(newy<0||newy>=N||newx<0||newx>=N) continue;

                            if(brr[newy][newx] == 0){
                                q.push({newy, newx});
                                brr[newy][newx] = 1;
                            }
                        }
                        q.pop();
                    }
                    ++cnt;
                }
            }
        }
        ans = max(ans, cnt);
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
