#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


// void solve(){
//     int N; cin >> N;
//     set<int> s;
//     int a;
//     for(int i=0; i<N; ++i) {cin >> a; s.insert(a);}

//     int M; cin >> M;
//     for(int i=0; i<M; ++i){
//         int num; cin >> num;
//         if(s.find(num) != s.end()) cout << "1\n";
//         else cout << "0\n";
//     }
// }

void solve(){
    int N; cin >> N;
    vector<int> v(N);
    for(int i=0; i<N; ++i) cin >> v[i];
    sort(v.begin(), v.end());
    int M; cin >> M;
    for(int i=0; i<M; ++i){
        int num; cin >> num;
        cout << binary_search(v.begin(), v.end(), num) << "\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
