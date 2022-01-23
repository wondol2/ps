#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

bool comp1(pair<int, pair<int, int>> p1, pair<int, pair<int, int>> p2){
    return p1.first < p2.first;
}

bool comp2(pair<int, pair<int, int>> p1, pair<int, pair<int, int>> p2){
    return p1.second.first < p2.second.first;
}

void solve(){
    int N; cin >> N;
    vector<pair<int, pair<int, int>>> v(N);
    for(int i=0; i<N; ++i){
        cin >> v[i].first;
        v[i].second.first = i;
    }
    sort(v.begin(), v.end(), comp1);
    int rank = 0;
    v[0].second.second = 0;
    for(int i=1; i<N; ++i){
        if(v[i].first > v[i-1].first) ++rank;
        v[i].second.second = rank;
    }
    sort(v.begin(), v.end(), comp2);

    for(auto x: v){
        cout << x.second.second << " ";
    }
    cout << "\n";
}

void god(){	int m;
	scanf("%d",&m);
    vector<int> v(m);
    for(auto &j : v) scanf("%d",&j);
    vector<int> w = v;
    sort(w.begin(), w.end()); w.resize(unique(w.begin(), w.end()) - w.begin());
    for(auto &j : v) j = lower_bound(w.begin(), w.end(), j) - w.begin();
    for(auto &j : v) printf("%d ", j);
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
