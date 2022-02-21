#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

const int NUM = 30;

void catalanNumber(){
    long long arr[NUM]{};
    arr[0] = arr[1] = 1;
    for(int i=2; i<NUM; ++i){
        for(int j=0; j<i; ++j){
            arr[i] += arr[j] * arr[i-j-1];
        }
    }
}

void solve(){
    
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
