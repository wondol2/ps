#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, K; cin >> N >> K;

    queue<int> q;
    vector<int> ans;
    for(int i=1; i<=N; ++i) q.push(i);

    int cnt = 0;
    while(!q.empty()){
        int num = q.front();
        ++cnt;
        if(cnt == K){
            ans.push_back(num);
            cnt = 0;
        }
        else{
            q.push(num);
        }
        q.pop();
    }

    cout << "<" << ans[0];
    for(int i=1; i<(int)ans.size(); ++i){
        cout << ", " << ans[i];
    }
    cout << ">\n";
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
