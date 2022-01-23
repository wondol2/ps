#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int N;
int arr[12];
int ops[4]; // + - * /
int max_val = INT_MIN, min_val = INT_MAX;
vector<int> v;
void dfs(int n){
    if(n == N-1){
        int val = arr[0];
        for(int i=1; i<N; ++i){
            if(v[i-1] == 0)
                val += arr[i];
            else if(v[i-1] == 1)
                val -= arr[i];
            else if(v[i-1] == 2)
                val *= arr[i];
            else if(v[i-1] == 3)
                val /= arr[i];
        }
        max_val = max(max_val, val);
        min_val = min(min_val, val);
    }
    for(int i=0; i<4; ++i){
        if(ops[i] > 0){
            --ops[i];
            v.push_back(i);
            dfs(n+1);
            ++ops[v.back()];
            v.pop_back();
        }
    }
}

void solve(){
    cin >> N;
    for(int i=0; i<N; ++i) cin >> arr[i];
    for(int i=0; i<4; ++i) cin >> ops[i];
    dfs(0);
    cout << max_val << "\n";
    cout << min_val << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
