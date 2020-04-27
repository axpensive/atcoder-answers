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

  int A, B, C, D;
  cin >> A >> B >> C >> D;

  while (true) {
    C -= B;
    if (C <= 0) {
      cout << "Yes" << endl;
      break;
    }

    A -= D;
    if (A <= 0) {
      cout << "No" << endl;
      break;
    }
  }

  return 0;
}
