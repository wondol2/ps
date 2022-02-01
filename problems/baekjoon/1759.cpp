#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

// vector<string> vowels; // a e i o u
// vector<string> consonants;
// vector<char> vowel; // a e i o u
// vector<char> consonant;
vector<char> v;
char arr[15];
int L, N; 
void dfs(int start){
    if(v.size() == L){
        int vowel = 0;
        for(int i=0; i<(int)v.size(); ++i){
            if(v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || 
                v[i] == 'o' || v[i] == 'u'){
                    ++vowel;
            }
        }
        if(vowel >= 1 && (int)v.size() - vowel >= 2){
            for(int i=0; i<(int)v.size(); ++i)
                cout << v[i];
            cout << "\n";
        }
        return;
    }
    for(int i=start; i<N; ++i){
        v.push_back(arr[i]);
        dfs(i+1);
        v.pop_back();
    }
}

void solve(){
    cin >> L >> N;

    for(int i=0; i<N; ++i) cin >> arr[i];
    sort(arr, arr+N);
    dfs(0);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T=1;
    // cin >> T;
    while(T--){ solve(); }
    return 0;
}
