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
int A[500001];
int tmp[500001];
int K, ans;


void merge(int p, int q, int r) {
    int i = p, j = q + 1, t = 1;
    while (i <= q && j <= r) {
        if (A[i] <= A[j])
            tmp[t++] = A[i++];
        else
            tmp[t++] = A[j++];
    }
    while (i <= q)
        tmp[t++] = A[i++];
    while (j <= r)
        tmp[t++] = A[j++];
    i = p; t = 1;
    while (i <= r){
        K--;
        cout << K << "\n";
        if(K==0) ans = tmp[t++];
        A[i++] = tmp[t++];
    }
}

void merge_sort(int p, int r) {
    if (p < r) {
        int q = (p + r + 1) / 2;
        merge_sort(p, q);
        merge_sort(q + 1, r);
        merge(p, q, r);     
    }
}

void solve(){
    int N; cin >> N >> K;
    for(int i=0; i<N; ++i) cin >> A[i];

    merge_sort(0, N-1);
    
    cout << ans << "\n";
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
