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

// N! が素数 p で何回割れるかを求める
ll legendre(ll N, ll p) {
  ll res = 0;
  while(N) {
    res += N / p;
    N /= p;
  }
  return res;
}

int main() {
  ll N;
  cin >> N;

  // 各素数 p に対して、N! の p の指数を求める
  ll res = 1;
  for(ll p = 2; p <= N; ++p) {
    // p が素数かどうか
    bool is_prime = true;
    for(ll q = 2; q * q <= p; ++q) {
      if(p % q == 0)
        is_prime = false;
    }

    // p が素数でない場合はスキップ
    if(!is_prime)
      continue;

    // p に対する指数
    ll e = legendre(N, p);
    debugN(e);
    res *= e + 1;
  }
  debug(res);
  return 0;
}
