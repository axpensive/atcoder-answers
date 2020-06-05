#include <bits/stdc++.h>
#define PI 3.14159265359
using namespace std;
template <class T>
inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}
template <class T>
inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
const long long INF = 1LL << 60;
using pll = pair<long long, long long>;

int main() {
  // 標準入力が早くなる。Cスタイルの入出力とC++スタイルの入出力を混合させてはならない。
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;
  vector<int> res(M);
  for (int bit = 0; bit < (1 << n); ++bit) {
    vector<int> S;
    for (int i = 0; i < n; i++) {
      if (bit & (1 << i)) {
        S.push_back(i);
      }
    }

    for (int i = 0; i < S.size(); i++) {
    }
  }
  return 0;
}
