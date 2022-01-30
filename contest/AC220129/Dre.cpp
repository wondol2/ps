#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    vector<int> v1(N), v2(N);
    for(int i=0; i<N; ++i) cin >> v1[i];
    for(int i=0; i<N; ++i) cin >> v2[i];

    vector<int> a1, a2;
    for(int i=0; i<N; ++i){
        while(a1.size() > 0){
            if(a1.back() > v1[i]){
                a1.pop_back();
                a2.pop_back();
            }
            else if(a1.back() == v1[i]){
                if(v2[i] <= v1[i]){
                    a1.pop_back();
                    a2.pop_back();
                }
                else break;
            }
            else break;
        }

        if(a1.size() > 0){
            if(v1[i] < a2.front()){
                a1.push_back(v1[i]);
                a2.push_back(v2[i]);
            }
            else if(v1[i] == a2.front()){
                auto x = upper_bound(v2.begin(), v2.end(), v2.front());
                if(x != v2.end()){
                    if(v1[i] > *x){
                        continue;
                    }
                }
                else continue;

                a1.push_back(v1[i]);
                a2.push_back(v2[i]);
            }

        }
        else{
            a1.push_back(v1[i]);
            a2.push_back(v2[i]);
        }
    }

    for(auto x: a1) cout << x << " ";
    for(auto x: a2) cout << x << " ";
    cout << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
