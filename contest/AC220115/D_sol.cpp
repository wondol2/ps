#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, N;
  cin >> a >> N;
  vector<int> d(1000000, -1);
  d[1] = 0;
  queue<int> Q;
  Q.push(1);
  while (!Q.empty()){
    int x = Q.front();
    Q.pop();
    if ((long long) x * a < 1000000){
      if (d[x * a] == -1){
        d[x * a] = d[x] + 1;
        Q.push(x * a);
      }
    }
    if (x >= 10 && x % 10 != 0){
      string S = to_string(x);
      rotate(S.begin(), S.end() - 1, S.end());
      int y = stoi(S);
      if (d[y] == -1){
        d[y] = d[x] + 1;
        Q.push(y);
      }
    }
  }
  cout << d[N] << endl;
}