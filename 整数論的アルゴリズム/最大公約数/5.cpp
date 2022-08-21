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

// vector<pair<ll, int>> primeFactorize(ll N) {
//   vector<pair<ll, int>> res;
//   for(int p = 2; p * p <= N; p++) {
//     if(N % p != 0)
//       continue;

//     int e = 0;
//     while(N % p == 0) {
//       e++;
//       N /= p;
//     }
//     res.emplace_back(p, e);
//   }
//   if(N != 1) {
//     res.emplace_back(N, 1);
//   }
//   return res;
// }

vector<ll> calcDivisors(ll N) {
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

ll GCD(ll x, ll y) { return x % y ? GCD(y, x % y) : y; }
int main() {
  ll N;
  cin >> N;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];
  ll gcd = A[0];
  rep3(i, 1, N) { gcd = GCD(A[i], gcd); }
  // 純粋に約数の個数を求める方法
  ll divisorsCount = calcDivisors(gcd).size();

  // 素因数分解して約数を求める方法(約数の個数を求めるだけだと冗長でTLE)
  // const auto pf = primeFactorize(gcd);
  // ll divisorsCount = 1;
  // for(const auto [p, e] : pf) {
  //   divisorsCount *= e + 1;
  // }

  debug(divisorsCount);

  return 0;
}
