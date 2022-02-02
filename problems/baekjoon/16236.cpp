#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

struct node{int y; int x; int d;};
int dy[4] = {-1,0,0,1};
int dx[4] = {0,-1,1,0};

bool comp(node &n1, node &n2){
    if(n1.d == n2.d){
        if(n1.y == n2.y){
            return n1.x < n2.x;
        }
        return n1.y < n2.y;
    }
    return n1.d < n2.d;
}

void solve(){
    int N; cin >> N;
    vector<vector<int>> arr(N, vector<int>(N));

    node shark;
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            cin >> arr[i][j];
            if(arr[i][j] == 9){
                shark = {i,j,2};
                arr[i][j] = 0;
            }
        }
    }

    int time = 0;
    int eat_cnt = 0;
    
    while(true){
        auto brr = arr;
        
        queue<node> q;
        q.push({shark.y, shark.x, 0});
        brr[shark.y][shark.x] = 987654321;

        vector<node> fishes;

        while(!q.empty()){
            node n = q.front();
            if(shark.d > arr[n.y][n.x] && arr[n.y][n.x] > 0){
                fishes.push_back(n);
            }

            for(int i=0; i<4; ++i){
                int ny = n.y+dy[i], nx = n.x+dx[i];
                if(ny<0 || ny>=N || nx<0 || nx>=N) continue;

                if(shark.d >= brr[ny][nx]){
                    brr[ny][nx] = 987654321;
                    q.push({ny,nx,n.d+1});                    
                }
            }
            q.pop();
        }
        if(fishes.size() > 0){
            sort(fishes.begin(), fishes.end(), comp);
            node n = fishes.front();
            arr[n.y][n.x] = 0;
            shark.y = n.y, shark.x = n.x;
            ++eat_cnt;
            if(eat_cnt == shark.d) {
                shark.d++;
                eat_cnt = 0;
            }
            time += n.d;
        }
        else{
            break;
        }
    }
    cout << time << "\n";
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
