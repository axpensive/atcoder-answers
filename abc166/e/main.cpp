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

  int N;
  cin >> N;
  map<long long, long long> sum;
  map<long long, long long> dif;

  for (int i = 1; i <= N; i++) {
    int tmp;
    cin >> tmp;
    ++sum[i + tmp];
    ++dif[i - tmp];
  }
  long long res = 0;

  /*
  なぜ、for文をN回しか回さないのか

  https://img.atcoder.jp/abc166/editorial.pdf
  i + Ai = j − Aj
  この問題では上記の式が元になっています。

  懸念してる点は1≤Ai≤10^9(1≤i≤N)だからN回for文を回すと漏れがでるのではということです。
  そのように考える理由はsumとdifのkeyには10^9や負数もありえるからです。(サンプルケースでも出ます。)
  でも、そんなことは考える必要はありません。
  keyが0~N-1の範囲以外のものがマッチング?するのは無理だからです。

  2≤N≤2×10^5
  1≤Ai≤10^9(1≤i≤N)
  という制約から
  j - Aj < N (負数もありえる。)
  i + Ai > N (負数はありえない)
  これで、keyがN以上、0以下のものを見る必要がないからです。
  片方がkeyがN以上もつが、もう片方はもつことはない
  負数に関しても同じです。

  なので、forをN回回せば十分です。
  */
  for (int i = 0; i < N; i++) {
    res += sum[i] * dif[i];
  }

  cout << res << endl;

  return 0;
}
