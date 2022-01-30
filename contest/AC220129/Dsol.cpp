#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#endif


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> a[i];
    }
    int x = *min_element(a.begin(), a.begin() + n);
    int y = x + 1;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            y = min(y, a[i + n]);
        }
    }
    if (y <= x) {
        cout << x << " " << y << '\n';
        return 0;
    }

    vector<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[st.back()] > a[i]) {
            st.pop_back();
        }
        st.push_back(i);
    }

    debug(st);

    int z = a[st[0] + n];
    bool up = false;
    for (int i = 1; i < (int) st.size(); i++) {
        if (a[st[i]] >= z) {
            break;
        }
        if (a[st[i] + n] != z) {
            up = (a[st[i] + n] > z);
            break;
        }
    }
    debug(up)
    while (!st.empty() && a[st.back()] > (up ? z : z - 1)) {
        st.pop_back();
    }






    for (int i : st) {
        cout << a[i] << " ";
    }
    for (int i : st) {
        cout << a[i + n] << " ";
    }
    cout << '\n';
    return 0;
}
