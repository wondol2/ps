#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

void star(int N, int y, int x){
	if ((y / N) % 3 == 1 && (x / N) % 3 == 1) cout << " ";
    else if(N == 1) cout << "*";
    else star(N/3, y, x);
}

void solve(){
    int N; cin >> N;
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j)
            star(N, i, j);
        cout << "\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
