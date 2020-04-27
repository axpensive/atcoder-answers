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

  string S;
  cin >> S;
  int N = S.length();
  string tmpS = S;
  reverse(tmpS.begin(), tmpS.end());

  if (S != tmpS) {
    cout << "No" << endl;
    return 0;
  }

  string beforeWord, tmpBeforeWord;
  beforeWord = tmpBeforeWord = S.substr(0, (N - 1) / 2);
  reverse(tmpBeforeWord.begin(), tmpBeforeWord.end());

  string afterWord, tmpAfterWord;
  afterWord = tmpAfterWord = S.substr((N + 1) / 2);
  reverse(tmpAfterWord.begin(), tmpAfterWord.end());

  if (beforeWord != tmpBeforeWord || afterWord != tmpAfterWord) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}
