#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int arr[N];
    priority_queue<int> q;

    for(int i=0; i<N; ++i){
        int num; cin >> num;
        q.push(-num);
    }

    int ans = 0;
    while(q.size() > 1){
        int a = -q.top(); q.pop();
        int b = -q.top(); q.pop();

        ans += a+b;

        q.push(-(a+b));
    }
    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
