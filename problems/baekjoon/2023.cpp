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
    int candi[4] = {1,3,7,9};
    vector<int> v[10];
    v[1].push_back(2);
    v[1].push_back(3);
    v[1].push_back(5);
    v[1].push_back(7);

    int N; cin >> N;
    for(int i=2; i<=N; ++i){
        for(int j=0; j<(int) v[i-1].size(); ++j){
            for(int k=0; k<4; ++k){
                int n = v[i-1][j] * 10 + candi[k];

                int flag = 1;
                for(int l=2; l*l<=n; ++l){
                    if(n%l == 0){
                        flag = 0; break;
                    }
                }
                if(flag) v[i].push_back(n);
            }
        }
    }

    for(auto x : v[N]){
        cout << x << "\n";
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
