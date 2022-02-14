#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

int table[101][101]{};
void preprocess(){
    for(int i=0; i<=100; ++i){
        for(int j=i; j<=100; ++j){
            table[i][j] = table[j][i] = (i+j)*(i+j);
        }
    }
}

int N;
int a[100]{}, b[100]{};
int ans = INT_MAX;
int aNum = 0, bNum = 0;

void replace(int k){
    for(int i=0; i<N; ++i){
        if(i == k) continue;
        aNum = aNum - table[a[i]][a[k]] + table[a[i]][b[k]];
        bNum = bNum - table[b[i]][b[k]] + table[b[i]][a[k]];
    }
    ans = min(ans, aNum+bNum);
}

void dfs(int n){
    // for(int i=0; i<N; ++i) cout << a[i] << " ";
    // cout << "\n";
    // for(int i=0; i<N; ++i) cout << b[i] << " ";
    // cout << "\n";
    // cout << n << " " << aNum << " " << bNum << "\n";
    if(aNum >= bNum) return;
    for(int i=n; i<N; ++i){
        if(aNum < bNum){
            replace(i);
            swap(a[i], b[i]);
            dfs(i+1);
            replace(i);
            swap(a[i], b[i]);
        }
    }
}

void solve(){
    ans = INT_MAX;
    cin >> N;
    for(int i=0; i<N; ++i) cin >> a[i];
    for(int i=0; i<N; ++i) cin >> b[i];
    for(int i=0; i<N; ++i){
        if(a[i] > b[i]) swap(a[i], b[i]);
    }

    aNum = 0, bNum = 0;
    for(int i=0; i<N; ++i){
        for(int j=i+1; j<N; ++j){
            aNum += table[a[i]][a[j]];
            bNum += table[b[i]][b[j]];
        }
    }
    ans = min(ans, aNum+bNum);

    dfs(0);

    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    cin >> T; // cin.ignore(256, '\n');

    preprocess();
    while(T--){ solve(); }
    return 0;
}
