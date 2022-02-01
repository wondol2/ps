#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N >> M;
    long long H[N];

    for(int i=0; i<N; ++i) cin >> H[i];
    
    vector<int> v[N];
    for(int i=0; i<M; ++i){
        int a, b; cin >> a >> b;
        --a; --b;
        
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    vector<long long> happy(N, LONG_LONG_MIN);

    queue<int> q;
    q.push(0);
    happy[0] = 0;

    while(!q.empty()){
        int num = q.front();
        for(int i=0; i<(int) v[num].size(); ++i){
            int candi = v[num][i];
            if(H[num] >= H[candi]){
                if(happy[candi] < happy[num] + H[num] - H[candi]){
                    happy[candi] = happy[num] + H[num] - H[candi];
                    q.push(candi);
                }
            }
            else{
                if(happy[candi] < happy[num] - 2*(H[candi]-H[num])){
                    happy[candi] = happy[num] - 2*(H[candi]-H[num]);
                    q.push(candi);
                }
            }
        }

        q.pop();
    }

    cout << *max_element(happy.begin(), happy.end()) << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
