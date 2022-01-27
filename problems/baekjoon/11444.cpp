#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    // long long N; cin >> N;
    long long N = 26;
    int a =0, b=1;
    cout << a << " " << b << " ";
    for(int i=2; i<=N; ++i){
        cout << (a+b)%7 << " ";
        a = a+b;
        swap(a,b);
    }
    cout << "\n";

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
