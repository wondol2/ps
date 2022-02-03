#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

// unsolved

void solve(){
    int N, S; cin >> N >> S;
    int arr[N];
    for(int i=0; i<N; ++i) cin >> arr[i];

    if(S > accumulate(arr, arr+N, 0)){
        cout << 0 << "\n";
        return;
    }

    int s = 0, e = N;

    while(s < e){
        int mid = (s-e)/2+e;

        int sum = accumulate(arr, arr+mid, 0);

        int flag = 0;
        for(int i=mid; i<N; ++i){
            if(sum == S){
                flag = 1;
                break;
            }

            sum += arr[i];
            sum -= arr[i-mid];
        }

        if(flag == 1){
            e = mid-1;
        }
        else{
            s = mid;
        }
    }

    cout << s << "\n";
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
