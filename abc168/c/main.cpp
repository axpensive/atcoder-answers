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
struct Point {
  double x, y;
};
const long long INF = 1LL << 60;
using pll = pair<long long, long long>;
double deg2rad(double degree) { return degree * PI / 180.0; }
int main() {
  // 標準入力が早くなる。Cスタイルの入出力とC++スタイルの入出力を混合させてはならない。
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int A, B, H, M;
  cin >> A >> B >> H >> M;

  long double radian = PI * 2 * (H / 12.0 + M / 60.0 / 12.0 - M / 60.0);

  long double res = A * A + B * B - 2 * A * B * cosl(radian);

  cout << fixed << setprecision(9) << sqrtl(res) << endl;
  return 0;
}
