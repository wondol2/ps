#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

struct node{int y;int x;};
int dx[4]={1,1,-1,-1};
int dy[4]={-1,1,-1,1};

void solve(){
    int N, M; cin >> N >> M;
    int arr[N][M];
    queue<node> virus;
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            cin >> arr[i][j];
            if(arr[i][j] == 2){
                virus.push({i,j});
            }
        }
    }

    int ans = 0;

    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            if(arr[i][j] == 0){
                arr[i][j] = 1;
                for(int ii=i; ii<N; ++ii){
                    for(int jj=0; jj<N; ++jj){
                        if((i!=ii || j!=jj) && arr[ii][jj] == 0){
                            arr[ii][jj] = 1;
                            for(int iii=ii; iii<N; ++iii){
                                for(int jjj=0; jjj<N; ++jjj){
                                    if((i!=iii || j!=jjj) && (ii!=iii || jj!=jjj) && arr[iii][jjj] == 0){
                                        arr[iii][jjj] = 1;
                                        int brr[N][M];
                                        for(int a=0; a<N; ++a){
                                            for(int b=0; b<M; ++b){
                                                brr[a][b] = arr[a][b];
                                            }
                                        }
                                        queue<node> q = virus;

                                        while(!q.empty()){
                                            node n = q.front();
                                            for(int z=0; z<4; ++z){
                                                int newx=n.x+dx[z], newy=n.y+dy[z];
                                                if(newx<0 || newx>=N || newy<0 || newy>=M) continue;
                                                if(brr[newx][newy] == 0){
                                                    brr[newx][newy]=2;
                                                    q.push({newx,newy});
                                                }
                                            }

                                            q.pop();
                                        }
                                        int cnt = 0;
                                        for(int a=0; a<N; ++a){
                                            for(int b=0; b<M; ++b){
                                                if(brr[a][b] == 0) ++cnt;
                                            }
                                        }
                                        ans = max(ans, cnt);

                                        arr[iii][jjj] = 0;
                                    }
                                }
                            }
                            arr[ii][jj] = 0;
                        }
                    }
                }
                arr[i][j] = 0;
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
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
