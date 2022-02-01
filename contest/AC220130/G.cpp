#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

// void solve(){
//     int N, Q, X; cin >> N >> Q >> X;
//     vector<int> arr(N);
//     for(int i=0; i<N; ++i) cin >> arr[i];

//     for(int i=0; i<Q; ++i){
//         int c, l, r; cin >> c >> l >> r;
//         --l;
//         if(c == 1) sort(arr.begin()+l, arr.begin()+r);
//         if(c == 2) sort(arr.begin()+l, arr.begin()+r, greater <>());
//     }
//     for(int i=0; i<N; ++i){
//         if(arr[i] == X){
//             cout << i+1 << "\n";
//             return;
//         }
//     }
// }

void solve(){
    int N, Q, X; cin >> N >> Q >> X;
    vector<int> arr(N);
    vector<int> idxs(N+1);

    int current = 0;
    for(int i=0; i<N; ++i){
        cin >> arr[i];
        idxs[arr[i]] = i;
        if(arr[i] == X) current = i;
    }

    
    for(int i=0; i<Q; ++i){
        int c, l, r; cin >> c >> l >> r;
        --l; // l <= x < r
        
        if(c == 1) sort(arr.begin()+l, arr.begin()+r);
        if(c == 2) sort(arr.begin()+l, arr.begin()+r, greater <>());
    }


    for(int i=0; i<N; ++i){
        if(arr[i] == X){
            cout << i+1 << "\n";
            return;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
