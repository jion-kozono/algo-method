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

// N の約数をすべて求める関数
vector<ll> calc_divisors(ll N) {
  vector<ll> res;
  for(ll i = 1; i * i <= N; ++i) {
    if(N % i != 0)
      continue;
    res.push_back(i);
    if(N / i != i)
      res.push_back(N / i);
  }
  return res;
}

int main() {
  // 入力
  ll N, M;
  cin >> N >> M;

  // M の約数の個数を答える
  debug(calc_divisors(M).size());
}
