#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

int N;
int tree[26][2];
const char c = 'A';

void preorder(int n){
    cout << (char)(c+n);
    if(tree[n][0] != -1) preorder(tree[n][0]);
    if(tree[n][1] != -1) preorder(tree[n][1]);
}

void inorder(int n){
    if(tree[n][0] != -1) inorder(tree[n][0]);
    cout << (char)(c+n);
    if(tree[n][1] != -1) inorder(tree[n][1]);
}

void postorder(int n){
    if(tree[n][0] != -1) postorder(tree[n][0]);
    if(tree[n][1] != -1) postorder(tree[n][1]);
    cout << (char)(c+n);
}

void solve(){
    cin >> N;
    for(int i=0; i<N; ++i){
        char n, l, r; cin >> n >> l >> r;
        tree[n-'A'][0] = (l=='.'?-1:l-'A');
        tree[n-'A'][1] = (r=='.'?-1:r-'A');
    }

    preorder(0); cout << "\n";
    inorder(0); cout << "\n";
    postorder(0); cout << "\n";
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
