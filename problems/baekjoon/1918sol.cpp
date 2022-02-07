#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


int prec(char x){
	if(x == '(') return 3;
	if(x == '+' || x == '-') return 2;
	if(x == '*' || x == '/') return 1;
	assert(0);
}

void solve(){
    string s; cin >> s;
	string ans;
	stack<char> stk;
	for(auto &i : s){
		if(i <= 'Z' && i >= 'A'){
			ans.push_back(i);
		}
		else if(i == ')'){
			while(!stk.empty() && stk.top() != '('){
				ans.push_back(stk.top());
				stk.pop();
			}
			stk.pop();
		}
		else if(i == '('){
			stk.push(i);
		}
		else{
			while(!stk.empty() && prec(stk.top()) <= prec(i)){
				ans.push_back(stk.top());
				stk.pop();
			}
			stk.push(i);
		}
	}
	while(!stk.empty()) ans.push_back(stk.top()), stk.pop();
	cout << ans;
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
