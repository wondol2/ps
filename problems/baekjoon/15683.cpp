#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif
//   1
// 2   0
//   3
struct node{int y; int x; int type; int dir;};

int N, M;
int arr[8][8];
vector<node> cctvs;
int ans = 987654321;
int brr[8][8];

int rotate(int d){
    if(d == 3) return 0;
    return d+1;
}

void checkup(int y, int x, int dir){
    if(dir == 0){
        while(++x < M && brr[y][x] < 6) brr[y][x] = -1;
    }
    else if(dir == 1){
        while(--y >= 0 && brr[y][x] < 6) brr[y][x] = -1;
    }
    else if(dir == 2){
        while(--x >= 0 && brr[y][x] < 6) brr[y][x] = -1;
    }
    else if(dir == 3){
        while(++y < N && brr[y][x] < 6) brr[y][x] = -1;
    }
}

void calculate(){
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            brr[i][j] = arr[i][j];
        }
    }
    int cctvs_top = 0;
    for(int k=0; k<(int) cctvs.size(); ++k){
        int i = cctvs[k].y;
        int j = cctvs[k].x;
        int type = cctvs[k].type;
        int d = cctvs[k].dir;
        if(type == 1){
            checkup(i,j,d);
        }
        else if(type == 2){
            checkup(i,j,d);
            checkup(i,j,rotate(rotate(d)));
        }
        else if(type == 3){
            checkup(i,j,d);
            checkup(i,j,rotate(d));
        }
        else if(type == 4){
            checkup(i,j,d);
            checkup(i,j,rotate(d));
            checkup(i,j,rotate(rotate(d)));
        }
        else if(type == 5){
            for(int k=0; k<4; ++k) checkup(i,j,k);
        }
    }
    int cnt = 0;
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            if(brr[i][j] == 0) ++cnt;
        }
    }
    ans = min(ans, cnt);
}

void dfs(int n){
    if(n == cctvs.size()){
        calculate();
        return;
    }
    if(cctvs[n].type == 5) dfs(n+1);
    else{
        for(int i=0; i<4; ++i){
            cctvs[n].dir = i;
            dfs(n+1);
        }
    }
}

void solve(){
    cin >> N >> M;
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            cin >> arr[i][j];
            if(arr[i][j] >= 1 && arr[i][j] <= 5){
                cctvs.push_back({i,j,arr[i][j],0});
            }
        }
    }
    // cout << cctvs.size() << "\n"; flush()
    dfs(0);
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
