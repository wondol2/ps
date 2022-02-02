#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    long long a, b; cin >> a >> b;

    // long long aa = sqrt(a);
    // long long bb = sqrt(b);
    vector<long long> powers;
    for(long long i=2; i*i<=b; ++i){
        powers.push_back(i*i);
    }

    int N = b-a+1;
    vector<int> arr(N, 1);

    for(int i=0; i<(int)powers.size(); ++i){
        long long power = powers[i];
        long long start = (a/power)*power + (a%power>0?power:0);

        while(start<=b){
            arr[start-a]=0;
            start += power;
        }
    }

    cout << accumulate(arr.begin(), arr.end(), 0LL) << "\n";
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
