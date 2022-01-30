#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int count_divisors(int n){
    int cnt = 0;
    for(int i=1; i*i<=n; ++i){
        if(n%i == 0){
            ++cnt;
            if(n/i != i) ++cnt;
        }
    }
    return cnt;
}

int improved_count_divisors(int n){
    vector<int> div(n+1);
    int cnt = 0;
    for(int i=1; i<=n; ++i){
        for(int j=i; j<=n; j+=i){
            ++div[j];
        }
    }
    for(int i=1; i<=n; ++i)
        cout << div[i] << " ";
    return cnt;
}

bool is_prime(int n){
    for(int i=2; i*i<=n; ++i)
        if(n%i == 0)
            return false;
    return true;
}
void sieve_of_eratosthenes(int n){
    // O(nlog(log(n))) == almost linear
    vector<int> prime(n+1, 1);
    prime[1] = 0;
    for(int i=2; i<=n; ++i){
        if(prime[i] == 0) continue;
        for(int j=i*i; j<=n; j+=i)
            prime[j] = 0;
    }
}
vector<int> sieve(int n){
    int primes[n] = {0,};
    vector<int> pr;
    for(int i=2; i<=n; ++i){
        if(primes[i] == 0){
            pr.push_back(i);
            for(int j=i*i; j<=n; j+=i)
                primes[j] = 1;
        }
        primes[i] ^= 1;
    }
    return pr;
}

int gcd1(int a, int b){
    // log(max(a,b))
    if(a<b) swap(a,b);
    if(b==0) return a;
    return gcd1(a%b, b);
}
int gcd(int a, int b){
    if(a<b) swap(a,b);
    while(b>0){
        a = a%b;
        swap(a,b);
    }
    return a;
}
int gcd2(int a, int b){
    return b ? gcd2(b, a%b) : a;
}
double Leibniz_series(){
    double pi = 0;
    for(int i=1; i<1000000000; i+=4){
        pi += (double)4/((double)i);
        pi -= (double)4/((double)(i+2));
    }
    return pi;
    return M_PI; // .............
}

void modulo_arithmetics(){
    // (a+b)%m == ((a%m)+(b%m))%m
    // (a*b)%m == ((a%m)*(b%m))%m
    // (a-b)%m == ((a%m)-(b%m)+m)%m
    // (a/b)%m != ((a%m)/(b%m)+m)%m
    int a = 156, b = 4, m = 17; // only if m is prime
    int res1 = (a/b) % m;
    a %= m;
    int inv_b = pw(b, m-2, m); // fermat's little theorem
    // int res2 = a*inv_b%m;
    int res2 = a*inv_b%m;
    cout << res1 << " " << res2 << "\n";
}

int pw(int a, int b, int m){
    // binary exponentiation / binpow
    // O(log b)
    if(b == 0){
        return a%m;
    }
    if(b & 1){
        int t = pw(a, (b-1)/2, m);
        return (long long) (t*t%m)*a % m;
    }
    else{
        int t = pw(a, b/2, m);
        return (long long) t*t % m;
    }
}

void solve(){
    int NUM = 15;
    // for(int i=1; i<=NUM; ++i)
    //     cout << count_divisors(i) << ' '; // 25
    // cout << "\n";
    // improved_count_divisors(NUM); // 25
    // cout << "\n";
    
    cout << gcd(12, 18) << '\n';
    cout << gcd(16, 24) << '\n';
    cout << gcd1(12, 18) << '\n';
    cout << __gcd(12, 18) << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    // cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
