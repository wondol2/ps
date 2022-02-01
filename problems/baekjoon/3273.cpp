#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int arr[2000001]{};
    for(int i=0; i<N; ++i){
        int num; cin >> num;
        ++arr[num];
    }
    int x; cin >> x;
    int ans = 0;
    int a = 0;
    for(int i=0; i<=x/2; ++i){
        if(i == x-i) ans += arr[i]/2;
        else ans += min(arr[i], arr[x-i]);
    }
    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
