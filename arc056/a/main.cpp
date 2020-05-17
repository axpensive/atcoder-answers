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

  long long A, B, K, L;

  cin >> A >> B >> K >> L;

  long long res = K / L * B + K % L * A;
  cout << res << endl;
  // chmin(res, K / L * B + K % L * A);
  // long long tmp = K * A;
  cout << K * A << endl;
  chmin(res, K * A);

  cout << res << endl;

  return 0;
}
