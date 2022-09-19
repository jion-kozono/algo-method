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

  // √N を整数にキャストする
  // 数値誤差を回避するため、EPS = 10^-9 を足している
  const double EPS = 1e-9;
  ll sq = (ll)(sqrt(N) + EPS);

  ll count = 0;
  vector<bool> is_prime(sq + 1, true);

  for(ll p = 2; p * p <= N; p++) {
    if(!is_prime[p])
      continue;
    count++;

    for(ll q = p * 2; q * q <= N; q += p) {
      is_prime[q] = false;
    }
  }
  debug(count);
  return 0;
}
