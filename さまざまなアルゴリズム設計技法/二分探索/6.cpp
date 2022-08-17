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
  int N;
  cin >> N;
  vector<ll> W(N), V(N);
  rep(i, N) cin >> W[i];
  V = W;

  // sort W asc
  sort(ALL(W));

  rep(i, N) {
    // left: invalid, right: valid
    ll left = -1, right = N;
    while(right - left > 1) {
      ll mid = (left + right) / 2;
      if(W[mid] >= V[i]) {
        right = mid;
      } else {
        left = mid;
      }
    }
    debug(right);
  }

  return 0;
}
