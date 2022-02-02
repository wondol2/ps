#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

struct node{int a;int b;int c;string name;};

bool comp(node x, node y){
    if(x.a == y.a){
        if(x.b == y.b){
            if(x.c == y.c){
                return x.name < y.name;
            }
            return x.c > y.c;
        }
        return x.b < y.b;
    }

    return x.a > y.a;
}

void solve(){
    int N; cin >> N;
    node arr[N];
    for(int i=0; i<N; ++i){
        cin >> arr[i].name >> arr[i].a >> arr[i].b >> arr[i].c;
    }

    sort(arr, arr+N, comp);

    for(int i=0; i<N; ++i){
        cout << arr[i].name << "\n";
    }
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
