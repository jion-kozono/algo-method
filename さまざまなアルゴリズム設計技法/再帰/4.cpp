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

vector<ll> memo;

ll calc(ll x) {
  if(memo[x] != -1)
    return memo[x];
  if(x == 0)
    memo[x] = 0;
  else if(x == 1)
    memo[x] = 1;
  else
    memo[x] = calc(x - 1) + calc(x - 2);
  return memo[x];
}

int main() {
  ll N;
  cin >> N;
  memo.resize(N + 1, -1);
  debug(calc(N));

  return 0;
}
