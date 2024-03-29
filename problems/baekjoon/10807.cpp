/**
 *  Author: wondol
 *  E-mail: wonsuk0227@gmail.com
**/

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

const int NUM = 10000;


void solve(){
    int N, v, ret=0;
    cin >> N;
    int arr[N];
    for(int i=0; i<N; ++i){
        cin >> arr[i];
    }
    cin >> v;
    for(int i=0; i<N; ++i){
        if(v==arr[i]) ret++;
    }
    cout << ret << "\n";
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
