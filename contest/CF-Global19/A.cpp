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
    int arr[N];
    for(int i=0; i<N; ++i) cin >> arr[i];
    int flag = 0;
    for(int i=1; i<N; ++i){
        if(arr[i] < arr[i-1]) flag = 1;
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
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
