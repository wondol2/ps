#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

vector<char> v;
queue<char> q;

void print_stack(){
    while(!v.empty()){
        cout << v.back();
        v.pop_back();
    }
}
void print_queue(){
    while(!q.empty()){
        cout << q.front();
        q.pop();
    }
}
void solve(){
    string s;
    getline(cin, s);

    bool tag=0;

    for(int i=0; s[i]; ++i){
        if(s[i] == '<') {
            tag = 1;
            print_stack();
            cout << '<';
        }
        else if(s[i] == '>') {
            tag = 0;
            print_queue();
            cout << '>';
        }
        else if(tag == 0){
            if(s[i] != ' '){
                v.push_back(s[i]);
            }
            else{
                print_stack();
                cout << ' ';
            }
        }
        else if(tag == 1){
            q.push(s[i]);
        }
    }
    print_stack();
    cout << "\n";
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
