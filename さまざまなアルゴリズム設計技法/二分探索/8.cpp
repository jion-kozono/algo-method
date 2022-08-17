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

int f(double x, vector<double> L) {
  double ans = 0;
  for(double l : L) {
    ans += (int)(l / x);
  }
  return ans;
}

int main() {
  int N, K;
  cin >> N >> K;
  vector<double> L(N);
  rep(i, N) cin >> L[i];

  double left = 0, right = 2e5;
  while(right - left > 1e-8) {
    double mid = (left + right) / 2;
    if(f(mid, L) >= K) {
      left = mid;
    } else {
      right = mid;
    }
  }

  printf("%.12lf", left);

  return 0;
}
