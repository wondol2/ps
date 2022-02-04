#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int arr[4] = {0,1,2,3};
    int N; cin >> N;
    while(N--){
        int a, b; cin >> a >> b;
        swap(arr[a], arr[b]);
    }
    for(int i=1; i<=3; ++i){
        if(arr[i] == 1){
            cout << i << "\n";
            return;
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
