#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int arr[6];
    for(int i=0; i<6; ++i) cin >> arr[i];

    for(int i=0; i<3; ++i) arr[i] = arr[i+3]-arr[i];

    if(arr[2] < 0){
        arr[2] += 60; arr[1] -= 1;
    }
    if(arr[1] < 0){
        arr[1] += 60; arr[0] -= 1;
    }

    for(int i=0; i<3; ++i) cout << arr[i] << " ";
    cout << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=3;
    // cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
