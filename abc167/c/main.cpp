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

  int N, M, X;
  cin >> N >> M >> X;
  vector<int> C(N);
  vector<vector<int>> A(N, vector<int>(M));
  for (int i = 0; i < N; i++) {
    cin >> C[i];
    for (int j = 0; j < M; j++) cin >> A[i][j];
  }
  int minSum = 1500000;
  for (int bit = 0; bit < (1 << N); bit++) {
    vector<int> res(M);
    int sum = 0;
    for (int i = 0; i < N; i++) {
      if (bit & (1 << i)) {
        sum += C[i];
        for (int j = 0; j < M; j++) {
          res[j] += A[i][j];
        }
      }
    }
    bool flag = true;
    for (int j = 0; j < M; j++) {
      if (res[j] < X) {
        flag = false;
      }
    }
    if (flag) chmin(minSum, sum);
  }

  if (minSum == 1500000)
    cout << -1 << endl;
  else
    cout << minSum << endl;
}
