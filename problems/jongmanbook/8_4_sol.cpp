#include <iostream>
using namespace std;

int a[1001];
int d[1001];
// void lis4(void)
// {
// 	int maxLen = 0;
// 	for (int i = 0; i < n; i++)
// 	{
// 		int start = 0, end = maxLen;
// 		int& ret = S[i];
		
// 		while (start < end)
// 		{
// 			int mid = (start + end) / 2;
// 			if (cache[mid] >= ret) end = mid;
// 			else start = mid + 1;
// 		}
// 		if (start == maxLen) cache[maxLen++] = ret;
// 		else cache[start] = ret;
// 	}
// 	printf("%d\n", maxLen);
// }
int solve()
{
	int n;
	cin >> n;
    a[0] = -99999999;
	for (int i = 1; i <= n; i++) cin >> a[i];

	int ans = 1;
	for (int i = 0; i <= n; i++){
		d[i] = 0;
		for (int j = 0; j < i; j++){
			if (a[i] > a[j])
				d[i] = max(d[i], d[j] + 1);
		}
        ans = max(ans, d[i]);
	}
	cout << ans << "\n";
	return 0;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    cin >> T;
    while(T--){
        solve();
    }

    return 0;
}
