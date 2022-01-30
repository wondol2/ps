#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


void solve(){
    int N; cin >> N;
    string s; cin >> s;
    vector<int> v[26];
    for(int i=0; i<N; ++i){
        v[s[i]-'a'].push_back(i);
    }

    int start = 0, end = N;
    for(int j=0; j<26; ++j){
        while(s[start] - 'a' == j) ++start;

        while(v[j].size() > 0){
            int candi = v[j].back();
            if(start < candi && candi < end){
                swap(s[start], s[candi]);
                end = candi;
            }
            v[j].pop_back();
            while(s[start] - 'a' == j) ++start;
        }
    }

    cout << s << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
