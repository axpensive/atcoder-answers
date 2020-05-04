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

int vector_finder(std::vector<int> vec, int number) {
  auto itr = std::find(vec.begin(), vec.end(), number);
  size_t index = std::distance(vec.begin(), itr);
  if (index != vec.size()) {  // 発見できたとき
    return 1;
  } else {  // 発見できなかったとき
    return 0;
  }
}

int main() {
  // 標準入力が早くなる。Cスタイルの入出力とC++スタイルの入出力を混合させてはならない。
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int N, K;
  cin >> N >> K;

  vector<int> A;

  for (int i = 0; i < N; i++) {
    int d;
    cin >> d;

    for (int i = 0; i < d; i++) {
      int element;
      cin >> element;
      A.push_back(element);
    }
  }

  sort(A.begin(), A.end());
  A.erase(unique(A.begin(), A.end()), A.end());

  cout << N - A.size() << endl;

  return 0;
}
