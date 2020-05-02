#include <bits/stdc++.h>
using namespace std;

int main() {
  // 標準入力が早くなる。Cスタイルの入出力とC++スタイルの入出力を混合させてはならない。
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  string S;
  cin >> N >> S;

  long r = 0;
  long g = 0;
  long b = 0;

  for (int i = 0; i < N; i++) {
    if (S[i] == 'R') {
      ++r;
    } else if (S[i] == 'G') {
      ++g;
    } else {
      ++b;
    }
  }

  long long all = r * g * b;

  long long rem = 0;
  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      int k = j * 2 - i;
      if (S[i] == S[j] || S[i] == S[k] || S[j] == S[k] || k >= N) {
        continue;
      }
      ++rem;
    }
  }

  cout << all - rem << endl;

  return 0;
}
