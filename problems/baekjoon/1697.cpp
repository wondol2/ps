#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, K; cin >> N >> K;
    int level[100001]{};

    queue<int> q;
    q.push(N);
    level[N] = 1;
    while(!q.empty()){
        int num = q.front();
        if(num == K) break;
        if(num-1 >= 0 && !level[num-1]){
            q.push(num-1);
            level[num-1] = level[num]+1;
        }
        if(num+1 <= 100000 && !level[num+1]){
            q.push(num+1);
            level[num+1] = level[num]+1;
        }
        if(num*2 <= 100000 && !level[num*2]){
            q.push(num*2);
            level[num*2] = level[num]+1;
        }
        q.pop();
    }
    cout << level[K] - 1 << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
