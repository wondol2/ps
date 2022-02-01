#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    const int N = 3;
    int arr[N];
    for(int i=0; i<N; ++i) cin >> arr[i];
    sort(arr, arr+N);

    if(arr[0] == arr[2]){
        cout << arr[0]*1000 + 10000 << "\n";
    }
    else if(arr[1] == arr[2] || arr[1] == arr[0]){
        cout << arr[1]*100 + 1000 << "\n";
    }
    else{
        cout << *max_element(arr, arr+N) * 100 << "\n";
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
