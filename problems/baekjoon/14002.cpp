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
    int N; cin >> N;
    int arr[N+1]{};

    for(int i=1; i<=N; ++i) cin >> arr[i];

    int dp[N+1]{};
    int pre[N+1]{};
    dp;
    for(int i=1; i<=N; ++i){
        for(int j=0; j<i; ++j){
            if(arr[i] > arr[j]){
                if(dp[i] < dp[j]+1){
                    // 1;
                    dp[i] = dp[j] + 1; // ???????????????????????????
                    pre[i] = j;
                }
            }
        }
    }

    int maxVal=0, maxIdx=0;
    
    for(int i=1; i<=N; ++i){
        if(maxVal < dp[i]){
            maxVal = dp[i];
            maxIdx = i;
        }
    }

    cout << maxVal << "\n";
    stack<int> s;
    while(maxIdx > 0){
        s.push(arr[maxIdx]);
        maxIdx = pre[maxIdx];
    }
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\n";
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
