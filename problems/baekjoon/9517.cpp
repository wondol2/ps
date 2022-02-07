#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int nextPlayer(int n){
    if(n==8) return 1;
    return n+1;
}

void solve(){
    int K, N; cin >> K >> N;
    int TIME = 210;
    int ansFlag = 0;
    while(N--){
        int time;
        char ans;
        cin >> time >> ans;
        
        TIME -= time;
        if(!ansFlag && TIME <= 0){
            ansFlag = 1;
            cout << K << "\n";
        }
        if(ans == 'T') K = nextPlayer(K);

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
