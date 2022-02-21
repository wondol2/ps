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
    char arr[N][M+1];
    for(int i=0; i<N; ++i) cin >> arr[i];
    
    for(int size=min(N,M)-1; size>=0; --size){
        for(int i=0; i+size<N; ++i){
            for(int j=0; j+size<M; ++j){
                bool sameFlag = 1;
                char temp = arr[i][j];
                if(temp != arr[i+size][j]) sameFlag = 0;
                if(temp != arr[i][j+size]) sameFlag = 0;
                if(temp != arr[i+size][j+size]) sameFlag = 0;
                if(sameFlag){
                    cout << (size+1)*(size+1) << "\n";
                    return;
                }
            }
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
