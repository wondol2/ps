#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

const long long M = 998244353;

long long pow(long long a, long long b){ // a^b
    long long s=1;
	while(b){
		if(b&1) s = s*a%M;
		b >>= 1;
		a = a*a%M; 
	}
	return s;
}

long long inv(long long a){
    return pow(a, M-2);
}

void solve(){
    long long N, K; cin >> N >> K;
    long long arr[N];

    for(int i=0; i<N; ++i) {
        cin >> arr[i];
        if(i) arr[0] -= arr[i];
    }
    arr[0] -= K;
    if(arr[0] < 0) {
        cout << "0\n"; return;
    }

    long long ans = 1;
    long long kMinusOneFacInv = 1;
    for(int i=1; i<K; ++i) kMinusOneFacInv = kMinusOneFacInv*i%M;
    kMinusOneFacInv = inv(kMinusOneFacInv);

    // N개의 공(구별x)을 K개의 박스(구별O)에 나눠 담는 경우의수
    // == (N+K-1)C(N) == (N+K-1)! / (N! * (K-1)!)

    for(int i=0; i<N; ++i){
        for(int j=arr[i]+1; j<arr[i]+K; ++j){
            ans = ans * j % M;
        }
        ans = ans * kMinusOneFacInv % M;
    }

    cout << ans << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
