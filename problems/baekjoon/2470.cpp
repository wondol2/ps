#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    int arr[N];
    for(int i=0; i<N; ++i) cin >> arr[i];

    sort(arr, arr+N);

    int S = 0, E = N-1;
    int s = 0, e = N-1;
    
    int ans = INT_MAX;
    while(s < e){
        if(ans > abs(arr[s] + arr[e])){
            ans = abs(arr[s] + arr[e]);
            S = s; E = e;
        }

        if(arr[s] >= 0 && arr[e] > 0){
            --e; continue;
        }
        if(arr[s] < 0 && arr[e] <= 0){
            ++s; continue;
        }

        if(abs(arr[s]) < abs(arr[e])){
            --e; continue;
        }
        else if(abs(arr[s]) > abs(arr[e])){
            ++s; continue;
        }
        else{
            break; // already zero
        }
    }

    cout << arr[S] << " " << arr[E] << "\n";
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
