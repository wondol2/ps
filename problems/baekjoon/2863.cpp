#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

void rotate(double *arr){
    double brr[4];
    brr[1] = arr[0];
    brr[3] = arr[1];
    brr[0] = arr[2];
    brr[2] = arr[3];
    for(int i=0; i<4; ++i) arr[i] = brr[i];
}

void solve(){
    double arr[4];
    for(int i=0; i<4; ++i) cin >> arr[i];

    double maxVal = 0;
    int maxIdx = 0;
    for(int i=0; i<4; ++i){
        if(maxVal < arr[0]/arr[2] + arr[1]/arr[3]){
            maxVal = arr[0]/arr[2] + arr[1]/arr[3];
            maxIdx = i;
        }
        rotate(arr);
    }
    cout << maxIdx << "\n";
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
