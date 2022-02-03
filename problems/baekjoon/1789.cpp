#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

void solve(){
    long long S; cin >> S;
    
    int n = sqrt(2*S+0.25)-0.5;
    cout << n << "\n";
}

// void solve(){
//     unsigned long long S; cin >> S;

//     unsigned long long s = 0, e = S;

//     while(s<e){
//         unsigned long long mid = (e-s+1)/2+s;
//         unsigned long long k;

//         if(mid&1) {
//             k = (mid+1)/2;
//             k *= mid;
//         }
//         else{
//             k = mid/2;
//             k *= (mid+1);
//         }

//         if(k <= S){
//             s = mid;
//         }
//         else{
//             e = mid - 1;
//         }
//     }
//     cout << s << "\n";
// }


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
