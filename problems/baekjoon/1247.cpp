#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    long long arr[N];
    for(int i=0; i<N; ++i) cin >> arr[i];
    sort(arr, arr+N);

    int s = 0, e = N;
    long long sum = arr[0];

    while(s+1<e){
        if(sum > 0 && arr[s] >= 0){
            cout << "+\n"; return;
        }
        if(sum < 0 && arr[e-1] <= 0){
            cout << "-\n"; return;
        }

        if(sum >= 0){
            sum += arr[++s];
        }
        else{
            sum += arr[--e];
        }
    }

    if(sum == 0) cout << "0\n";
    else if(sum > 0) cout << "+\n";
    else if(sum < 0) cout << "-\n";

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=3;
    // cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
