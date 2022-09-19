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

vector<pair<ll, int>> prime_factorize(ll N) {
  vector<pair<ll, int>> res;
  for(ll p = 2; p * p <= N; p++) {
    if(N % p != 0)
      continue;

    int e = 0;
    while(N % p == 0) {
      e++;
      N /= p;
    }
    res.emplace_back(p, e);
  }
  if(N != 1)
    res.emplace_back(N, 1);
  return res;
}

int main() {
  ll N;
  cin >> N;

  const auto &pf = prime_factorize(N);
  debug(pf.size() + 1);
  return 0;
}
