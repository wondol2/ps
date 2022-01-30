#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

struct node{int x; int y; int idx;};
bool compare(node a, node b){
    if(a.x != b.x) return a.x < b.x;
    if(a.y != b.y) return a.y < b.y;
    return a.idx < b.idx;
}
void solve(){
    int N; cin >> N;
    vector<node> v(N);
    int arr[2*N];
    for(int i=0; i<2*N; ++i) cin >> arr[i];

    for(int i=0; i<N; ++i){
        node a;
        a.x = arr[i]; a.y = arr[i+N]; a.idx = i;
        v[i] = a;
    }
    sort(v.begin(), v.end(), compare);

    vector<int> ans;
    ans.push_back(v[0].idx);



    node firstnode = v[0];
    node secondnode;
    int lastidx = v[0].idx;
    for(int i=1; i<N; ++i){
        if(v[i].x > firstnode.y) continue;
        if(v[i].idx < lastidx && v[i].x > arr[lastidx]) continue;

        if(v[i].x == firstnode.y){
            if(v[i].x > secondnode.y) continue;
        }
        if(v[i].x <= firstnode.x && v[i].idx < firstnode.idx){
            if(v[i].y != firstnode.y) secondnode = firstnode;
            firstnode = v[i];
        }
        else if(v[i].x == v[0].x){
            if(v[i].idx < secondnode.idx && v[i].y != firstnode.y){
                secondnode = v[i];
            }
        }
        ans.push_back(v[i].idx);
        lastidx = max(lastidx, v[i].idx);
    }








    sort(ans.begin(), ans.end());
    for(auto x : ans){
        cout << arr[x] << " ";
    }
    for(auto x : ans){
        cout << arr[x+N] << " ";
    }
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
