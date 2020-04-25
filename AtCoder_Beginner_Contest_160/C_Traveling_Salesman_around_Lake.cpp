#include <bits/stdc++.h>
#define PI 3.14159265359
using namespace std;
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
const long long INF = 1LL << 60;
using pll = pair<long long, long long>;

int main()
{
    // 標準入力が早くなる。Cスタイルの入出力とC++スタイルの入出力を混合させてはならない。
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int K, N;
    cin >> K >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }

    int res = 2000000;
    for (int i = 0; i < N - 1; i++)
    {
        chmin(res, K - abs(A.at(i) - A.at(i + 1)));
    }
    chmin(res, abs(A.at(0) - A.at(N - 1)));

    cout << res << endl;
    return 0;
}
