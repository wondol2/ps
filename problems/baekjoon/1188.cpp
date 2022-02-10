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
    int N, M; cin >> N >> M;
    int ans = 0;
    if(M%N > 0){
        int cnts[101]{};
        for(int i=0; i<N; ++i) ++cnts[M%N];

        int sum = 0;
        for(int n=100; n>=1; --n){
            while(cnts[n]>0){
                if(sum+n > N){
                    if(cnts[(N-sum)] > 0){
                        cnts[(N-sum)]--;
                        ++ans;
                        continue;
                    }
                    else{
                        cnts[n - (N-sum)]++;
                        ++ans;
                    }
                    sum = 0;
                }
                else if(sum+n < N){
                    sum += n;
                }
                else{
                    sum = 0;
                }
                // debug(sum)
                // debug(ans)
                // for(int i=0; i<5; ++i) cout << cnts[i] << " ";
                // cout << "\n";
                cnts[n]--;
            }
        }
    }
    cout << ((M-1)/N)*N + ans << "\n";
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
