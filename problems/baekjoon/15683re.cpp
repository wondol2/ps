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
bool DB[6][4] = {
	{},
	{true, false, false, false},
	{true, false, true, false},
	{true, true, false, false},
	{true, true, true, false},
	{true, true, true, true}
};
int D[4][2] = { {0,1},{-1,0},{0,-1},{1,0} };

struct node{int y; int x; int type; int dir;};

int N, M;
int arr[8][8];
vector<node> cctvs;
int ans = 987654321;
int brr[8][8];

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

        for(int m=0; m<4; ++m){
            int newDir = (d+m)%4;
            int dy = D[newDir][0], dx = D[newDir][1];
            if(DB[type][(newDir-d+4)%4]){
                for(int q=1;;++q){
                    int y2 = i + dy*q, x2 = j + dx*q;
                    if(y2<0||y2>=N||x2<0||x2>=M||brr[y2][x2]>=6) break;
                    brr[y2][x2] = -1;
                }
            }
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
