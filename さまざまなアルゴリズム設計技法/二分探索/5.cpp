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
  ll N, K;
  cin >> N >> K;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  // sort A asc
  sort(ALL(A));

  ll count = 0;
  rep(i, N) {
    // left: invalid, right: valid
    ll left = -1, right = N;
    while(right - left > 1) {
      ll mid = (left + right) / 2;
      if(A[mid] >= K - A[i]) {
        right = mid;
      } else {
        left = mid;
      }
    }
    count += N - right;
  }
  debug(count);

  return 0;
}
