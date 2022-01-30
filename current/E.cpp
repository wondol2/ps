#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N, M; cin >> N >> M;
    int H[N];

    for(int i=0; i<N; ++i) cin >> H[i];
    
    int happy[N]{};
    
    vector<int> v[N];
    for(int i=0; i<M; ++i){
        int a, b; cin >> a >> b;
        --a; --b;
        
        v[a].push_back(b);
        v[b].push_back(a);
    }

    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int num = q.front();
        // debug(num)
        for(int i=0; i<(int) v[num].size(); ++i){
            int candi = v[num][i];
            int temp = -1;
            if(H[num] > H[candi]){
                if(!happy[candi] || happy[candi] < happy[num] + H[num] - H[candi]){
                    temp = happy[num] + H[num] - H[candi];
                }
            }
            else if(H[num] < H[candi]){
                if(!happy[candi] || happy[candi] < happy[num] + 2*(H[num] - H[candi])){
                    temp = happy[num] + 2*(H[num] - H[candi]);
                }
            }
            else{
                if(!happy[candi] || happy[candi] < happy[num]){
                    temp = happy[num];
                }
            }
            if(temp != -1){
                happy[candi] = temp;
                q.push(candi);
            }
        }

        q.pop();
    }

    cout << max(0, *max_element(happy, happy+N)) << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
