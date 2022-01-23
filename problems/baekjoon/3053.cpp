#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int R; cin >> R;
    // double pi = 0;
    // for(int i=1; i<1000000000; i+=4){
    //     pi += (double)4/((double)i);
    //     pi -= (double)4/((double)(i+2));
    // }
    printf("%.6lf\n", M_PI*R*R);
    printf("%.6lf\n", (double)R*R*2);
}

int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
