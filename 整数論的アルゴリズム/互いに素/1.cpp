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

int GCD(int x, int y) { return (x % y) ? GCD(y, x % y) : y; }

vector<int> calc_ab_list(int ab, int gcd) {
  vector<int> res;
  for(int i = 1; i * i <= ab; i++) {
    if(ab % i != 0)
      continue;
    if(ab / i != i) {
      int a = i;
      int b = ab / i;
      if(GCD(a, b) == 1) {
        res.push_back(gcd * (a + b));
      }
    }
  }
  sort(ALL(res));
  return res;
}

int main() {
  int gcd = 12, lcm = 480;
  int ab = lcm / gcd; // gcd*a + gcd*b = lcm

  // 互いに素なa,bの積がabとなる組み合わせを求め、ABを合計した値を取得
  vector<int> ab_list = calc_ab_list(ab, gcd);
  rep(i, ab_list.size()) { debug(ab_list[i]); }

  return 0;
}
