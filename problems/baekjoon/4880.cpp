#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    while(true){
        int arr[3];
        for(int i=0; i<3; ++i) cin >> arr[i];
        
        if(!arr[0]&&!arr[1]&&!arr[2]) return;
        
        // sort(arr, arr+3);

        if(arr[1]-arr[0] == arr[2]-arr[1]) {
            cout << "AP " << arr[2]*2 - arr[1] << "\n";
        }
        else {
            cout << "GP " << arr[2] * (arr[2]/arr[1]) << "\n";
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
