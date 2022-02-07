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
    sort(arr, arr+3);
    if(arr[1]-arr[0] == arr[2]-arr[1]){
        cout << arr[2] + arr[1]-arr[0] << "\n";
    }
    else if((arr[1]-arr[0])*2 == arr[2]-arr[1]){
        cout << arr[1] + (arr[1]-arr[0]) << "\n";
    }
    else if((arr[1]-arr[0]) == (arr[2]-arr[1])*2){
        cout << arr[0] + (arr[2]-arr[1]) << "\n";
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
