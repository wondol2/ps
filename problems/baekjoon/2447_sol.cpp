#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif

void f(int n, int x, int y)
{
	if ((x / n) % 3 == 1 && (y / n) % 3 == 1) putchar(' ');
	else if (n / 3 == 0) putchar('*');
	else f(n / 3, x, y);
}

void solve(){
    int N; cin >> N;
    for (int i = 0; i < N ; i++)
    {
        for (int j = 0; j < N; j++)
        {
            f(N, i, j);
        }
        putchar('\n');
    }
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
