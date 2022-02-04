#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;

    int sum1 = 0;
    for(int i=0; i<N; ++i){
        int num; cin >> num;
        if(num) ++sum1;
    }
    cout << (sum1>N/2?"Junhee is cute!":"Junhee is not cute!") << "\n";
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
