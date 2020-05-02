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

  // 桁数(N)であるのに対して 1 0 はだめ(ただし、 N = 1のときは例外)
  // 同じSであるが、Cが違うのは矛盾するのでだめ

  int N, M;
  cin >> N >> M;

  vector<int> S(M), C(M);

  for (int i = 0; i < M; i++) {
    cin >> S.at(i) >> C.at(i);
  }

  vector<int> res(N, 100);
  for (int i = 0; i < M; i++) {
    if (res.at(S.at(i)) == 100) {
      res.at(S.at(i)) = C.at(i);
    } else if (res.at(S.at(i)) == C.at(i)) {
      cout << -1 << endl;
    }
  }

  for (int i = 0; i < N; i++) {
    if (res.at(i) == 100) {
      res.at(i) = 0;
    }
  }

  int sum = 0;
  for (int i = 0; i < N; i++) {
    sum = sum * 10 + res.at(i);
  }

  if (to_string(sum).length() != N) {
    cout << -1 << endl;
  } else {
    cout << sum << endl;
  }
  return 0;
}
