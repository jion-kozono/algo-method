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

double f(double x) { return x * (x * (x + 1) + 2) + 3; }

int N, A[109];
int main() {
  cin >> N;

  double left = -1, right = 100;
  int ans = 0;

  while(right - left > 1e-4) {
    double mid = (right + left) / 2;
    if(f(mid) >= N) {
      right = mid;
    } else {
      left = mid;
    }
  }

  printf("%.12lf", right);
  return 0;
}
