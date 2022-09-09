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
  int N, M;
  cin >> N >> M;
  vector<ll> A(N), B(M);
  rep(i, N) cin >> A[i];
  rep(i, M) cin >> B[i];
  sort(ALL(A));

  rep(k, M) {
    int left = 0, right = N;
    int target = B[k];
    while(right - left > 1) {
      int mid = (left + right) / 2;
      int x = A[mid];
      if(x > target) {
        right = mid;
      } else
        left = mid;
    }
    debug(right);
  }

  return 0;
}
