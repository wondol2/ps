#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

struct node{int y; int x; int way;};
int dy[4]={-1, 0, 1, 0};
int dx[4]={0, 1, 0, -1};

int getidx(int d){
    return d>3? 0: d;
}

int rotate(int d){
    return d-1 < 0 ? 3 : d-1;
}

void solve(){
    int N, M; cin >> N >> M;
    int y, x, d; cin >> y >> x >> d; // N E S W
    node cleaner = {y,x,d};

    int arr[N][M];
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            cin >> arr[i][j];
        }
    }

    int vis[N][M]{};
    int cnt = 0;

    vis[cleaner.y][cleaner.x] = 1;
    ++cnt;

    while(true){
        int ny = cleaner.y;
        int nx = cleaner.x;

        bool cleaned = 0;
        for(int i=0; i<4; ++i){
            cleaner.way = rotate(cleaner.way);
            int newy = ny+dy[cleaner.way];
            int newx = nx+dx[cleaner.way]; 
            if(!vis[newy][newx] && arr[newy][newx] == 0){
                cleaner.y = newy;
                cleaner.x = newx;
                vis[newy][newx] = 1;
                cleaned = 1;
                ++cnt;
                break;
            }
        }

        if(!cleaned){
            int way = rotate(rotate(cleaner.way));
            int newy = cleaner.y+dy[way];
            int newx = cleaner.x+dx[way]; 
            if(arr[newy][newx] == 1){
                break;
            }
            else{
                cleaner.y = newy;
                cleaner.x = newx;
            }
        }
    }

    cout << cnt << "\n";
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
