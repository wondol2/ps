#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define sz(a) ((int)a.size())
#define re return
#define all(a) a.begin(),a.end()
#define int long long
#define rept(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,a) rept(i,0,a)
#define vi vector<int>
using namespace std;
const int MOD=998244353;
int qpow(int a,int b){
	int s=1;
	while(b){
		if(b&1)s=s*a%MOD;
		b>>=1;
		a=a*a%MOD; 
	}
	re s;
}
int inv(int x){
	re qpow(x,MOD-2);
}
signed main()
{
	int n,k;
	cin>>n>>k;
	vi v(n);
	rep(i,n)cin>>v[i];
	v[0]-=k;
	rept(i,1,n)v[0]-=v[i];
	if(v[0]<0)re cout<<"0\n",0;




	int ans=1,invk=1;
	rept(i,1,k)invk=invk*i%MOD;
	invk=inv(invk);
	rep(i,n){
		ans=ans*invk%MOD;
		rept(j,v[i]+1,v[i]+k)
			ans=ans*j%MOD;
	}




	cout<<ans<<"\n";
	re 0;
}

