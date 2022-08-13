#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) x.begin(), x.end()
#define debug(var)                                                             \
  do {                                                                         \
    view(var);                                                                 \
  } while(0)
#define debugN(var)                                                            \
  do {                                                                         \
    std::cout << #var << " : ";                                                \
    view(var);                                                                 \
  } while(0)
template <typename T> void view(T e) { std::cout << e << std::endl; }
template <typename T> void view(const std::vector<T> &v) {
  for(const auto &e : v) {
    std::cout << e << " ";
  }
  std::cout << std::endl;
}
template <typename T> void view(const std::vector<std::vector<T>> &vv) {
  for(const auto &v : vv) {
    view(v);
  }
}

int main() {
  ll N;
  cin >> N;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  // 答えが 32-bit 範囲を超えうることに注意
  ll S = accumulate(ALL(A), 0LL);
  // 二乗和を求める
  ll T = 0LL;
  for(auto ai : A) {
    T += ai * ai;
  }
  // 出力
  ll ans = (S * S - T) / 2;
  debug(ans);

  // 以下ではTLE
  // ll sum = 0;
  // rep(i, N) cin >> A[i];

  // rep(i, N - 1) {
  //   rep3(j, i + 1, N) { sum += A[i] * A[j]; }
  // }
  // debug(sum);
  return 0;
}
