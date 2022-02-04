#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

long long sum(long long n){
    n = abs(n);
    if(n & 1)
        return ((n+1)/2) * n;
    return ((n)/2) * (n+1);
}

void solve2(){
    long long a, b; cin >> a >> b;
    if(a > b) swap(a, b);
    long long asum=0, bsum=0;

    if(a<0 && b<0){
        asum = sum(a);
        bsum = sum(b+1);
    }
    else if(a>0 && b>0){
        asum = sum(a-1);
        bsum = sum(b);
    }
    else{
        asum = sum(a);
        bsum = sum(b);
    }
    cout << bsum - asum << "\n";
}

void solve(){
    long long a, b; cin >> a >> b;
    if(abs(a) > abs(b)) swap(a, b);
    long long asum=0, bsum=0;

    asum = sum(abs(a));
    bsum = sum(abs(b));

    cout << (bsum - asum)*(a+b>=0?1:-1) + (a*b>0?a:0) << "\n";
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
