#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    char arr[N][N+1];
    for(int i=0; i<N; ++i){
        cin >> arr[i];
    }
    vector<int> v;
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            if(arr[i][j] == '1'){
                queue<pair<int, int>> q;
                int cnt = 0;
                q.push({i, j});
                arr[i][j] = '0';
                while(!q.empty()){
                    pair<int, int> p = q.front();
                    // debug(p);
                    ++cnt;
                    int y = p.first, x = p.second;
                    if(y+1 < N && arr[y+1][x] == '1'){
                        q.push({y+1, x}); arr[y+1][x] = '0';
                    }
                    if(x+1 < N && arr[y][x+1] == '1'){
                        q.push({y, x+1}); arr[y][x+1] = '0';
                    }
                    if(y-1 >= 0 && arr[y-1][x] == '1'){
                        q.push({y-1, x}); arr[y-1][x] = '0';
                    }
                    if(x-1 >= 0 && arr[y][x-1] == '1'){
                        q.push({y, x-1}); arr[y][x-1] = '0';
                    }
                    q.pop();
                }
                v.push_back(cnt);
            }
        }
    }
    sort(v.begin(), v.end());

    cout << v.size() << "\n";
    for(auto x : v){
        cout << x << "\n";
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
