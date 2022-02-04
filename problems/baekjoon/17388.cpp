#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int arr[3];
    for(int i=0; i<3; ++i) cin >> arr[i];

    if(accumulate(arr, arr+3, 0) >= 100){
        cout << "OK\n";
        return;
    }
    int minval = *min_element(arr, arr+3);
    if(arr[0] == minval) cout << "Soongsil\n";
    if(arr[1] == minval) cout << "Korea\n";
    if(arr[2] == minval) cout << "Hanyang\n";
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
