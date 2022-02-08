#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif


void solve(){
    int N, M, K; cin >> N >> M >> K;

    vector<vector<int>> v;
    set<int> work;
    for(int i=0; i<N; ++i){
        int n; cin >> n;
        vector<int> vv;
        while(n--){
            int w; cin >> w;
            vv.push_back(w);
        }
        if(vv.size() == 1){
            work.insert(vv.back());
        }
        else{
            v.push_back(vv);
        }
    }

    



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
