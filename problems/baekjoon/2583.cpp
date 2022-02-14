#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

struct node{int y; int x;};
int dy[4] = {1,-1,0,0};
int dx[4] = {0,0,1,-1};

void solve(){
    int N, M, K; cin >> N >> M >> K;
    int arr[N][M]{};
    for(int i=0; i<K; ++i){
        int a,b,c,d; cin>>a>>b>>c>>d;
        for(int x=a; x<c; ++x){
            for(int y=b; y<d; ++y){
                arr[y][x] = 1;
            }
        }
    }

    vector<int> ans;
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            if(arr[i][j] == 0){
                queue<node> q;
                q.push({i,j});
                arr[i][j] = 1;
                int size = 0;
                while(!q.empty()){
                    node n = q.front();
                    ++size;
                    for(int k=0; k<4; ++k){
                        int y = n.y + dy[k];
                        int x = n.x + dx[k];
                        
                        if(y<0||y>=N||x<0||x>=M) continue;

                        if(arr[y][x] == 0){
                            arr[y][x] = 1;
                            q.push({y,x});
                        }
                    }
                    q.pop();
                }

                ans.push_back(size);
            }
        }
    }

    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for(auto x : ans) cout << x << " ";
    cout << "\n";
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
