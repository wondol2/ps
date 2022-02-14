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
    int N; cin >> N;
    int arr[N-2]{};
    int n; cin >> n;
    for(int i=0; i<N-2; ++i) cin >> arr[i];
    cin >> n;
    N -= 2;

    int flag = 1;
    for(int i=0; i<N; ++i){
        flag &= arr[i] == 1;
    }
    if(flag || (N==1 && (arr[0]&1))){
        cout << "-1\n"; return;
    }

    long long ans = 0;
    for(int i=0; i<N; ++i){
        ans += arr[i]/2 + (arr[i]&1?1:0);
    }
    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
