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

ll GCD(ll x, ll y) { return (x % y) ? GCD(y, x % y) : y; }

int main() {
  ll A, B, C, D;
  cin >> A >> B >> C >> D;

  if(abs(B - D) == 0) {
    debug(abs(A - C) - 1);
    return 0;
  }
  ll G = GCD(abs(A - C), abs(B - D));

  // (x′,y′) の差分移動を G 回繰り返したものになる.
  // 両端は含まないからG - 1
  debug(G - 1);

  return 0;
}
