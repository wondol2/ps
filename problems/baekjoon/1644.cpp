#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

int N;
vector<bool> isPrime(4000001, true);
vector<int> primes;
void preprocess(){
    for(int i=2; i <= N; ++i){
        if(!isPrime[i]) continue;
        for(int j=2*i; j <= N; j+=i){
            isPrime[j] = false;
        }
    }
    for(int i=2; i <= N; ++i){
        if(isPrime[i]) primes.push_back(i);
    }
    debug(primes)
}

void solve(){
    cin >> N;
    preprocess();
    int M = primes.size();
    int sum = 0; // sum [i, j)
    int ans = 0;

    for(int i=0, j=0; i<M && j<=M;){
        if(j < M && sum <= N) sum += primes[j++];
        else if(sum >= N) sum -= primes[i++];
        else break;

        if(sum == N) ++ans;
    }
    cout << ans << "\n";
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
