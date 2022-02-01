#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<LL, LL> PLL;

const LL MOD=998244353;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    LL n,m;
    cin>>n>>m;

    vector<vector<LL>> pos;
    for (LL i=0; i<=m; i++) {
        for (LL j=0; j<=m; j++) {
            for (LL k=0; k<=m; k++) {
                if (i>j || (i==j && i!=m)) {
                    continue;
                }
                if (j>k || (j==k && j!=m)) {
                    continue;
                }
                pos.push_back({i,j,k});
            }
        }
    }

    LL dpn = pos.size();
    vector<PLL> trans;
    for (LL i=0; i<dpn; i++) {
        auto from = pos[i];
        for (LL j=0; j<m; j++) {
            auto tmp = from;
            LL updp = lower_bound(tmp.begin(), tmp.end(), j)-tmp.begin();
            if (updp==3) {
                continue;
            }
            tmp[updp] = j;
            LL to = lower_bound(pos.begin(), pos.end(), tmp)-pos.begin();
            trans.push_back({i, to});
        }
    }

    vector<LL> dp(dpn, 0);
    dp.back()=1;
    for (LL i=0; i<n; i++) {
        vector<LL> tmp(dpn, 0);
        for (const auto &x:trans) {
            tmp[x.second]=(tmp[x.second]+dp[x.first])%MOD;
        }
        swap(dp, tmp);
    }

    LL ans=0;
    for (LL i=0; i<dpn; i++) {
        auto st = pos[i];
        if (st.back()!=m) {
            ans=(ans+dp[i])%MOD;
        }
    }

    cout<<ans<<"\n";

    return 0;
}