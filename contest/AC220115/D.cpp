// https://atcoder.jp/contests/abc235/tasks/abc235_d

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int a, N;

int get_max_idx(int num){
    int idx = 1;
    while(num > 0){
        num /= 10;
        idx *= 10;
    }
    return idx;
}
void solve(){
    cin >> a >> N;

    int dp[1000001][2] = {0,};

    int Nidx = get_max_idx(N);
    vector<int> candidates;
    for(int i=0; i<Nidx; i++){
        if(i*a < Nidx)
            dp[i][0] = i*a;
        if(i >= 10 && (i % 10 != 0)){
            int idx = get_max_idx(i);
            idx/=10;
            int temp = (idx*(i%10) + i/10);
            if (temp < Nidx)
                dp[i][1] = temp;
        }
    }

    int visit[1000001] = {0};
    int que[10000001][2];
    int front = 0, rear = 0;
    que[rear][0] = 1;
    que[rear++][1] = 0;
    int ans = 0;
    while(front != rear){
        int num = que[front][0];
        int cnt = que[front++][1];
        if (num == N){
            ans = cnt;
            break;
        }
        if(visit[num] == 1) continue;
        visit[num] = 1;

        if (rear < 10000000 && visit[dp[num][0]] == 0 && dp[num][0] > 0){
            que[rear][0] = dp[num][0];
            que[rear++][1] = cnt+1;

        }
        if (rear < 10000000 && visit[dp[num][1]] == 0 && dp[num][1] > 0){
            que[rear][0] = dp[num][1];
            que[rear++][1] = cnt+1;
        }
    }
    if (ans != 0) cout << ans << '\n';
    else cout << -1 << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
