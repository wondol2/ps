#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


string solve(){
    int arr[3];
    for(int i=0; i<3; ++i) cin >> arr[i];
    sort(arr, arr+3);

    if(arr[2]*arr[2] == arr[1]*arr[1] + arr[0]*arr[0]){
        return "yes";
    }
    else{
        return "no";
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T; // cin.ignore(256, '\n');
    for(int tc=1; tc<=T; ++tc){
        cout << "Scenario #" << tc << ":\n";
        cout << solve() << "\n";
        if(tc < T) cout << "\n";
    }
    return 0;
}
