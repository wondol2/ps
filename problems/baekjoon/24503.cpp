#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#define flush() cout.flush();
#else
#define debug(x)
#define flush()
#endif

const int NUM = 32000000;
map<long long, int> primeFactors;
map<long long, int> getPrimeFactors(long long n){
    map<long long, int> ret;
    for(int i=2; i*i<=n; ++i){
        while(n%i == 0){
            ++ret[i];
            n /= i;
        }
    }
    if(n > 1) ++ret[n];
    return ret;
}

long long N;

map<long long, int> fac[NUM];
map<long long, int> factorization(long long n){
    map<long long, int> ret = fac[n-1];
    n = __gcd(n, N);
    for(int i=2; i*i<=n; ++i){
        while(n%i == 0){
            if(ret.find(i) != ret.end() && ret[i] > 0){
                --ret[i];
                if(ret[i] == 0) ret.erase(i);
            }
            n /= i;
        }
    }
    if(n > 1 && ret.find(n) != ret.end() && ret[n] > 0){
        --ret[n];
        if(ret[n] == 0) ret.erase(n);
    }
    return ret;
}


void solve(){
    cin >> N;
    // debug(sqrt(1e15))
    
    primeFactors = getPrimeFactors(N);
    // debug(primeFactors)
    int E = NUM;
    fac[1] = primeFactors;
    for(int i=2; i<NUM; ++i){
        fac[i] = factorization(i);
        if(E == NUM && fac[i].size() == 0){
            E = i; break;
        }
    }
    // debug(fac[2])
    // debug(fac[3])

    // if(E == -1) primeFactors.

    int Q; cin >> Q;
    while(Q--){
        long long a; cin >> a;
        a = __gcd(a, N);
        auto m = getPrimeFactors(a);
        // debug(m)
        // debug(E)
        if(E == NUM){
            if(a % primeFactors.rbegin()->first != 0){
                cout << primeFactors.rbegin()->first << " ";
                continue;
            }
        }
        int s = 1, e = E;
        while(s < e){
            // cout << s << " " << e << "\n";
            int mid = (e-s)/2+s;
            auto t = fac[mid];
            // debug(mid)
            // debug(t)
            // debug(m)
            for(auto it=m.begin(); it!=m.end(); ++it){
                long long key = it->first;
                if(t.find(key) != t.end()){
                    if(t[key] <= m[key]*mid) t.erase(key);
                }
            }
            if(t.size() == 0){
                e = mid;
            }
            else{
                s = mid+1;
            }
        }

        cout << s << " ";
    }
    cout << "\n";
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
