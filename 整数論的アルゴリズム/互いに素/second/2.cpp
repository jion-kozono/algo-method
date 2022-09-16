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

ll GCD(ll x, ll y) { return (x % y) ? GCD(y, (x % y)) : y; }

vector<ll> calc_divisors(ll n) {
  vector<ll> res;
  for(ll i = 1; i * i <= n; i++) {
    if(n % i != 0)
      continue;
    res.push_back(i);

    if(n / i != i)
      res.push_back(n / i);
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

  ll ab = M / G;
  auto divisors = calc_divisors(ab);

  // a * b = ab となる (a, b) であって、互いに素なものを考える
  ll res = (ab + 1) * G;
  for(auto a : divisors) {
    ll b = ab / a;
    // 互いに素でない場合は不可
    if(GCD(a, b) != 1)
      continue;

    res = min(res, (a + b) * G);
  }
  debug(res);
  return 0;
}
