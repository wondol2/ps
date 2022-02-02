#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

struct node{int y; int x;};
int N, M;
int arr[50][50];
vector<node> house;
vector<node> chick;
vector<node> newchick;
int ans = 987654321;

void dfs(int n){
    if((int)newchick.size() == M){
        int dist_sum = 0;
        for(int i=0; i<(int)house.size(); ++i){
            int min_dist = 987654321;
            for(int j=0; j<(int)newchick.size(); ++j){
                int dist = abs(house[i].y-newchick[j].y) + abs(house[i].x-newchick[j].x);
                min_dist = min(min_dist, dist);
            }
            dist_sum += min_dist;
        }
        ans = min(ans, dist_sum);
        return;
    }

    for(int i=n; i<(int)chick.size(); ++i){
        newchick.push_back(chick[i]);
        dfs(i+1);
        newchick.pop_back();
    }
}


void solve(){
    cin >> N >> M;
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            cin >> arr[i][j];

            if(arr[i][j] == 1) house.push_back({i,j});
            if(arr[i][j] == 2) chick.push_back({i,j});
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
    // cin >> T; cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
