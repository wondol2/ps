#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    const int M = 987654321;
    int N; cin >> N;

    vector<int> dp(N+1, M);
    vector<int> memory(N+1, M);

    dp[N] = 0;
    memory[N] = N+1;
    for(int i=N; i>=0; --i){
        if(i*3 <= N && dp[i*3]+1 < dp[i]){
            memory[i] = i*3;
            dp[i] = dp[i*3]+1;
        }
        if(i*2 <= N && dp[i*2]+1 < dp[i]){
            memory[i] = i*2;
            dp[i] = dp[i*2]+1;
        }
        if(i+1 <= N && dp[i+1]+1 < dp[i]){
            memory[i] = i+1;
            dp[i] = dp[i+1]+1;
        }
    }

    cout << dp[1] << "\n";

    int n = 1;
    vector<int> v;
    while(n <= N){
        v.push_back(n);
        n = memory[n];
    }

    for(int i=(int)v.size()-1; i>=0; --i){
        cout << v[i] << " ";
    }
    cout << "\n";
}


void solve2(){
    const int M = 987654321;
    int N; cin >> N;

    vector<int> memory(N+1, M);
    queue<int> q;
    q.push(N);
    memory[N] = N+1;

    while(!q.empty()){
        int n = q.front();
        if(n == 1) break;
        
        if(n%3 == 0 && memory[n/3] == M){
            q.push(n/3);
            memory[n/3] = n;
        }
        if(n%2 == 0 && memory[n/2] == M){
            q.push(n/2);
            memory[n/2] = n;
        }
        if(n-1 >= 0 && memory[n-1] == M){
            q.push(n-1);
            memory[n-1] = n;
        }
        q.pop();
    }
    int n = 1;
    vector<int> v;
    while(n <= N){
        v.push_back(n);
        n = memory[n];
    }

    cout << (int) v.size() - 1 << "\n";
    for(int i=(int)v.size()-1; i>=0; --i){
        cout << v[i] << " ";
    }
    cout << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
