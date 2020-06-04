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

  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    // ゼロ判定
    if (a[i] == 0) {
      cout << 0 << endl;
      return 0;
    }
  }
  long long res = 1;
  for (int i = 0; i < n; i++) {
    if (1000000000000000000 / res < a[i]) {
      cout << -1 << endl;
      return 0;
    }
    res *= a[i];
  }

  cout << res << endl;

  return 0;
}
