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

// x以下の個数を求める
ll calcSizeLessThanOrEqualsToNum(ll n, ll x) {
  ll count = 0;
  // iを固定し、jの範囲は一旦無視して不等式の取りうる値を求め、
  // もし、jの範囲を超えるならば、N、超えないならば、範囲内の個数を足していく
  rep(i, n) { count += min(n, x / (i + 1)); }

  return count;
}

int main() {
  ll N, X;
  cin >> N >> X;

  // binary search
  ll left = -1, right = N * N;
  while(right - left > 1) {
    ll mid = (right + left) / 2;
    if(calcSizeLessThanOrEqualsToNum(N, mid) >= X) {
      right = mid;
    } else {
      left = mid;
    }
  }

  debug(right);

  return 0;
}
