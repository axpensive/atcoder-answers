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

int divSum(int n) {
  int divCount = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      ++divCount;
    }
  }
  return divCount;
}

int main() {
  // 標準入力が早くなる。Cスタイルの入出力とC++スタイルの入出力を混合させてはならない。
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  int res = 0;
  for (int i = 1; i <= N; i = i + 2) {
    int tmp = divSum(i);

    if (tmp == 8) {
      ++res;
    }
  }

  cout << res << endl;

  return 0;
}
