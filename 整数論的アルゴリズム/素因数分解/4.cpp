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

vector<pair<int, int>> primeFactorize(int n) {
  vector<pair<int, int>> res;

  for(int p = 2; p * p <= n; p++) {
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
  int N;
  cin >> N;
  int count = 0;
  int target = 12;
  while(count != 5) {
    const auto pf = primeFactorize(target);
    int divisorsCount = 1;
    for(const auto [p, e] : pf) {
      divisorsCount *= e + 1;
    }
    if(divisorsCount == 6) {
      debug(target);
      count++;
    }
    target++;
  }
  return 0;
}
