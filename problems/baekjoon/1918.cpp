#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

//https://www.acmicpc.net/board/view/75399


string make_postfix(string a, string op, string b){
    stringstream ss;
    ss << a << b << op;
    return ss.str();
}

string sol(vector<string> s){
    vector<string> v;
    for(int i=0; i<(int) s.size(); ++i){
        if(s[i] == ")"){
            int idx = 0;
            for(int j=(int) v.size()-1; j>=0; --j){
                if(v[j] == "(") { idx = j; break; }
            }
            vector<string> ss;
            for(int j=idx+1; j<(int) v.size(); ++j){
                ss.push_back(v[j]);
            }
            int popLen = v.size()-idx;
            for(int j=0; j<popLen; ++j){
                v.pop_back();
            }
            string t = sol(ss);
            v.push_back(t);
        }
        else{
            v.push_back(s[i]);
        }
    }
    vector<string> vv;
    for(int i=0; i<(int) v.size(); ++i){
        if(v[i] == "*" || v[i] == "/"){
            string a = vv.back(); vv.pop_back();
            string b = v[i+1];
            vv.push_back(make_postfix(a,v[i],b));
            ++i;
        }
        else{
            vv.push_back(v[i]);
        }
    }
    string vvv = "";
    if(!vv.empty()) vvv = vv[0];
    for(int i=1; i<(int) vv.size()-1; i+=2){
        vvv = make_postfix(vvv, vv[i], vv[i+1]);
    }
    return vvv;
}

void solve(){
    string s; cin >> s;
    vector<string> ss;
    for(int i=0; i<(int)s.size(); ++i){
        string t(1,s[i]);
        ss.push_back(t);
    }
    cout << sol(ss) << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin.exceptions(cin.failbit);
    int T=1;
    // cin >> T; // cin.ignore(256, '\n');
    while(T--){ solve(); }
    return 0;
}
