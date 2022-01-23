#include <bits/stdc++.h>
 
using namespace std;
 

template <typename T>
class fenwick {
  public:
    vector<T> fenw;
    int n;

    fenwick(int _n) : n(_n) {
      fenw.resize(n);
    }

    void modify(int x, T v) {
      while (x < n) {
        fenw[x] += v;
        x |= (x + 1);
      }
    }

    T get(int x) {
      T v{};
      while (x >= 0) {
        v += fenw[x];
        x = (x & (x + 1)) - 1;
      }
      return v;
    }
};
 
struct node {
  int a = 0;
 
  inline void operator += (node &other) {
    a = max(a, other.a);
  }
};
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  vector<int> pa(n + 1), pb(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    pa[a[i]] = i;
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    pb[b[i]] = i;
  }
  fenwick<node> fenw(n);
  for (int i = 0; i < n; i++) {
    vector<int> ps;
    for (int x = a[i]; x <= n; x += a[i]) {
      ps.push_back(pb[x]);
    }
    sort(ps.rbegin(), ps.rend());
    for (int j : ps) {
      fenw.modify(j, {fenw.get(j - 1).a + 1});
    }
  }
  cout << fenw.get(n - 1).a << '\n';
  return 0;
}