#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) std::begin(x), std::end(x)
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
  ll N;
  cin >> N;

  ll sum = 0;
  rep(i, N) {
    int a;
    cin >> a;
    sum += a;
  }
  debug(sum * sum);
  // 以下ではTLE
  // vector<int> A(N);
  // rep(i, N) cin >> A[i];
  // ll sum = 0;
  // rep(i, N) {
  //   rep3(j, i, N) {
  //     if(A[i] != A[j])
  //       sum += 1LL * A[i] * A[j] * 2;
  //     else
  //       sum += 1LL * A[i] * A[j];
  //   }
  // }

  // debug(sum);
  return 0;
}
