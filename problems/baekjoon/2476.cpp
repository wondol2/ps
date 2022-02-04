#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    
    int maxval = 0;

    while(N--){
        int arr[3];
        for(int i=0; i<3; ++i) cin >> arr[i];
        sort(arr, arr+3);
        int val =0;

        if(arr[0] == arr[2]){
            val = 10000+1000*arr[1];
        }
        else if(arr[0] == arr[1] || arr[1] == arr[2]){
            val = 1000+100*arr[1];
        }
        else{
            val = 100*arr[2];
        }
        maxval = max(maxval, val);
    }
    cout << maxval << "\n";
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
