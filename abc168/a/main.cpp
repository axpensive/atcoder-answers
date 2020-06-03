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
  string N;
  cin >> N;

  char target = N[N.length() - 1];

  if (target == '3') {
    cout << "bon" << endl;
  } else if (target == '0' || target == '1' || target == '6' || target == '8') {
    cout << "pon" << endl;
  } else {
    cout << "hon" << endl;
  }

  return 0;
}
