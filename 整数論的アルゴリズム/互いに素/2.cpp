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

ll GCD(ll x, ll y) { return (x % y) ? GCD(y, x % y) : y; }

ll calc_minimum_ab(ll ab, ll gcd) {
  ll res = (ab + 1) * gcd;
  for(ll i = 1; i * i <= ab; i++) {
    if(ab % i != 0)
      continue;
    ll a = i;
    ll b = ab / i;
    if(GCD(a, b) == 1) {
      res = min(gcd * (a + b), res);
    }
  }
  return res;
}

int main() {
  ll G, M;
  cin >> G >> M;
  if(M % G != 0) {
    debug(-1);
    return 0;
  }
  ll ab = M / G; // GA * GB = M;

  // 互いに素なa,bの積がabとなる組み合わせを求め、ABを合計した値を取得
  ll minimum_ab = calc_minimum_ab(ab, G);
  debug(minimum_ab);

  return 0;
}
