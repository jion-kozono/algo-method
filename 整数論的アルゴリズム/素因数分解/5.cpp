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

vector<pair<ll, ll>> primeFactorize(ll n) {
  vector<pair<ll, ll>> res;

  for(ll p = 2; p * p <= n; p++) {
    if(n % p != 0)
      continue;

    int e = 0;
    while(n % p == 0) {
      e++;
      n /= p;
    }
    res.emplace_back(p, e);
  }

  if(n != 1) {
    res.emplace_back(n, 1);
  }
  return res;
}

int main() {
  ll N;
  cin >> N;
  const auto pf = primeFactorize(N);
  for(const auto [p, e] : pf) {
    rep(i, e) { cout << p << " "; }
  }
  cout << endl;
  return 0;
}
