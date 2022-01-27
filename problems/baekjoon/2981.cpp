#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

vector<int> divs;
set<int> s;
vector<int> aa;

void print_divs(int n){
    int val = 1;
    for(int i=0; i<aa.size(); ++i){
        val *= aa[i];
    }
    if(val != 1) s.insert(val);

    for(int i=n; i<divs.size(); ++i){
        aa.push_back(divs[i]);
        print_divs(i+1);
        aa.pop_back();
    }
}

void solve(){
    int N; cin >> N;
    int arr[N]{};
    for(int i=0; i<N; ++i) cin >> arr[i];
    sort(arr, arr+N);
    int val = INT_MAX;
    int subs[N]{};
    for(int i=0; i<N-1; ++i){
        subs[i] = arr[i+1] - arr[i];
        val = min(val, subs[i]);
    }
    int preval = -1;

    while(preval != val){
        preval = val;
        for(int i=0; i<N-1; ++i){
            subs[i] %= val;
            if(subs[i] != 0 && subs[i] < val){
                swap(subs[i], val);
            }
        }
    }
    for(int m=2; val > 1; ++m){
        while(val%m == 0){
            divs.push_back(m);
            val /= m;
        }
    }
    print_divs(0);
    for(auto ss : s){
        cout << ss << " ";
    }
    cout << "\n";
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
