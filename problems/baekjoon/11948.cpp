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
    sort(arr, arr+4);
    sort(arr+4, arr+6);

    cout << accumulate(arr+1, arr+4, 0) + accumulate(arr+5, arr+6, 0) << "\n";

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
