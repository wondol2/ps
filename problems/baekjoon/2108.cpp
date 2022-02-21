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


void solve(){
    int N; cin >> N;
    int arr[N];
    for(int i=0; i<N; ++i) cin >> arr[i];
    sort(arr, arr+N);

    int sum = accumulate(arr, arr+N, 0);
    cout << sum/N + (sum>0?1:-1)*(abs(sum%N)>N/2?1:0) << "\n";
    cout << arr[N/2] << "\n";

    int cnts[10000]{};
    for(int i=0; i<N; ++i) ++cnts[arr[i] + 4000];

    vector<int> freq;
    int maxCnt = 0;
    for(int i=0; i<10000; ++i){
        if(maxCnt < cnts[i]){
            maxCnt = cnts[i];
            freq.clear();
        }
        if(maxCnt == cnts[i]){
            freq.push_back(i-4000);
        }
    }
    sort(freq.begin(), freq.end());
    if(freq.size() == 1) cout << freq[0] << "\n";
    else cout << freq[1] << "\n";
    cout << (*max_element(arr, arr+N) - *min_element(arr, arr+N)) << "\n";
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
