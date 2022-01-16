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

    int Nidx = get_max_idx(N);
    vector<bool> visit(1000001, false);
    vector<pair<int, int>> que; // num, lv
    int front = 0, rear = 0;
    que.push_back({1, 0});
    rear++;
    int ans = 0;
    while(front != rear){
        int num = que[front].first;
        int lv = que[front++].second;
        if(visit[num] == true) continue;

        if (num == N){
            ans = lv;
            break;
        }

        visit[num] = true;

        long long temp = (long long) num*a;
        if(temp < Nidx && visit[temp] == false){
            que.push_back({temp, lv+1}); rear++;
        }
        if(num >= 10 && (num % 10 != 0)){
            int idx = get_max_idx(num) / 10;
            temp = (idx*(num%10) + num/10);
            if (temp < Nidx && visit[temp] == false){
                que.push_back({temp, lv+1}); rear++;
            }
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
