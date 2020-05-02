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

  // vector<vector<int>> A(3, vector<int>(3));
  vector<int> A(9);
  vector<int> res(9, 0);

  for (int i = 0; i < 9; i++) {
    cin >> A.at(i);
  }

  int N;
  cin >> N;

  vector<int> B(N);

  for (int i = 0; i < N; i++) {
    cin >> B.at(i);
  }

  for (int i = 0; i < N; i++) {
    vector<int>::iterator itr;
    itr = find(A.begin(), A.end(), B.at(i));
    if (itr == A.end()) continue;
    res.at(distance(A.begin(), itr)) = 1;
  }

  if ((res.at(0) == 1 && res.at(1) == 1 && res.at(2) == 1) ||
      (res.at(3) == 1 && res.at(4) == 1 && res.at(5) == 1) ||
      (res.at(6) == 1 && res.at(7) == 1 && res.at(8) == 1) ||
      (res.at(0) == 1 && res.at(3) == 1 && res.at(6) == 1) ||
      (res.at(1) == 1 && res.at(4) == 1 && res.at(7) == 1) ||
      (res.at(2) == 1 && res.at(5) == 1 && res.at(8) == 1) ||
      (res.at(0) == 1 && res.at(4) == 1 && res.at(8) == 1) ||
      (res.at(2) == 1 && res.at(4) == 1 && res.at(6) == 1)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
