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
  int n;
  cin >> n;
  vector<int> L(n);
  rep(i, n) cin >> L[i];
  vector<int> string_count(1e5 + 9);
  rep(i, n) { string_count[L[i]]++; }

  vector<int> acc(1e5 + 9);
  rep3(i, 1, 1e5 + 9) { acc[i] = acc[i - 1] + string_count[i]; }

  int Q;
  cin >> Q;
  rep(i, Q) {
    int l, r;
    cin >> l >> r;
    int result = acc[r] - acc[l - 1];
    debug(result);
  }
  return 0;
}
