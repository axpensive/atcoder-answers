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

  int N, M;
  cin >> N >> M;

  vector<long long> H;

  for (int i = 0; i < N; i++) {
    int tmp;
    cin >> tmp;
    H.push_back(tmp);
  }

  vector<int> res;
  for (int i = 0; i < M; i++) {
    int A, B;

    cin >> A >> B;

    if (H.at(A - 1) == H.at(B - 1)) {
      res.push_back(A);
      res.push_back(B);
    } else if (H.at(A - 1) > H.at(B - 1)) {
      res.push_back(B);
    } else {
      res.push_back(A);
    }
  }

  sort(res.begin(), res.end());
  res.erase(unique(res.begin(), res.end()), res.end());

  cout << N - res.size() << endl;

  return 0;
}
