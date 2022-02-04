#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int y=0, m=0;
    for(int i=0; i<N; ++i){
        int num; cin >> num;
        y += (num/30 + 1)*10;
        m += (num/60 + 1)*15;
    }
    if(y < m) cout << "Y " << y << "\n";
    else if(y > m) cout << "M " << m << "\n";
    else cout << "Y M " << y << "\n";
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
