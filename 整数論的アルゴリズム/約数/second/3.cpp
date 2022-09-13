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

vector<ll> calc_divisors(ll N) {
  vector<ll> res;
  for(ll i = 1; i * i <= N; i++) {
    if(N % i != 0)
      continue;

    res.push_back(i);

    if(N / i != i)
      res.push_back(N / i);
  }
  return res;
}

int main() {
  ll N;
  cin >> N;

  auto res = calc_divisors(N);
  ll sum = 0;

  rep(i, res.size()) {
    if(res[i] == N)
      continue;
    sum += res[i];
  }

  // (sum == N * 2) ⇦ 本来はNを排除しないで、S(N)−N=NよりS(N)=2Nで表せる。
  bool can = sum == N;
  debug(can ? "Yes" : "No");
  return 0;
}
