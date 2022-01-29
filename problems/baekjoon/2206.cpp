#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int dy[4] = {+1, -1, 0, 0};
int dx[4] = {0, 0, +1, -1};
int N, M;

bool isin(int y, int x){
    return y >= 0 && y < N && x >= 0 && x < M;
}

void solve(){
    cin >> N >> M;
    char arr[N][M+1];
    for(int i=0; i<N; ++i) cin >> arr[i];

    queue<int> qy, qx, qsmash;
    int level[N][M][2]{};

    qy.push(0); qx.push(0); qsmash.push(0);
    level[0][0][0] = 1;
    while(!qy.empty()){
        int y = qy.front(), x = qx.front(), smash = qsmash.front();
        int lv = level[y][x][smash];
        for(int i=0; i<4; ++i){
            int yy = y+dy[i], xx = x+dx[i];
            if(!isin(yy,xx)) continue;
            if(arr[yy][xx] == '0'){
                if(!level[yy][xx][smash]){
                    qy.push(yy); qx.push(xx); qsmash.push(smash);
                    level[yy][xx][smash] = lv + 1;
                }
            }
            else{
                if(!level[yy][xx][1] && smash == 0){
                    qy.push(yy); qx.push(xx); qsmash.push(1);
                    level[yy][xx][1] = lv + 1;
                }
            }
        }
        qy.pop(); qx.pop(); qsmash.pop();
    }

    int a = level[N-1][M-1][0], b = level[N-1][M-1][1];
    if (a == 0 && b == 0) cout << "-1\n";
    else if (a == 0) cout << b << "\n";
    else if (b == 0) cout << a << "\n";
    else cout << min(a,b) << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
