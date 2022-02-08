#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

#define uid(a,b) uniform_int_distribution<long long>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const long long M = 1000000000000000000;

void solve(){
    int T = 1;
    int a=1, b=1;

    a = uid(3,8), b = uid(3,8);
    cout << a << " " << b << "\n";
    vector<pair<pair<int,int>, int>> v;
    for(int i=0; i<min(a,b); ++i){
        v.push_back({{uid(0,a-1),uid(0,b-1)}, uid(1,5)});
    }
    for(int i=0; i<a; ++i){
        for(int j=0; j<b; ++j){
            bool check = 0;
            for(int k=0; k<min(a,b); ++k){
                if(v[k].first.first==i && v[k].first.second==j){
                    check = 1; 
                    cout << v[k].second << " ";
                    break;
                }
            }
            if(!check){
                if(uid(0,1)&1){
                    cout << "6 ";
                }
                else{
                    cout << "0 ";
                }
            }
        }
        cout << "\n";
    }
    // a = uid(0,30), b = uid(0, 30);
    // if(a >= b) swap(a,b);

    // cout << T << "\n";
    // cout << a << " " << b << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
