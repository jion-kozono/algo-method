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

ll calc(ll x) { return x * (x + 1) / 2; }

bool isOK(ll x, ll k) { return calc(x) >= k; }

int main() {
  int N;
  cin >> N;
  vector<ll> X(N);
  rep(i, N) cin >> X[i];

  rep(i, N) {
    ll left = -1, right = 2e9;
    while(right - left > 1) {
      ll mid = (left + right) / 2;
      if(isOK(mid, X[i])) {
        right = mid;
      } else {
        left = mid;
      }
    }
    debug(right);
  }

  return 0;
}
