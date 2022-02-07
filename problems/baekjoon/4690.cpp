#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int N = 100;
vector<int> v;

void dfs(int n){
    if(v.size() == 4){
        int arr[4]{};
        for(int i=0; i<4; ++i){
            arr[i] = v[i]*v[i]*v[i];
        }
        if(arr[0] == arr[1]+arr[2]+arr[3]){
            cout << "Cube = " << v[0];
            cout << ", Triple = (" << v[1];
            cout << "," << v[2] << "," << v[3] << ")\n";
        }
        return;
    }

    for(int i=n; i<=N; ++i){
        v.push_back(i);
        if(v.size() == 1) dfs(2);
        else dfs(i+1);
        v.pop_back();
    }
}


void solve(){
    dfs(2);
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
