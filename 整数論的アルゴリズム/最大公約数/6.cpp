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

vector<ll> calcDivisors(ll N) {
  vector<ll> res;
  for(ll i = 1; i * i <= N; i++) {
    if(N % i != 0)
      continue;
    res.push_back(i);

    if(N / i != i)
      res.push_back(N / i);
  }
  sort(ALL(res));
  return res;
}

ll GCD(ll x, ll y) { return x % y ? GCD(y, x % y) : y; }
int main() {
  ll A, B, R, S;
  cin >> A >> B >> R >> S;

  ll gcd = GCD(A - R, B - S);
  auto divisors = calcDivisors(gcd);
  ll ans = 0;
  rep(i, divisors.size()) {
    // divisors[i] < max(R, S)
    if(divisors[i] < R || divisors[i] < S) {
      continue;
    }
    ans = divisors[i];
    break;
  }
  debug(ans ? ans : -1);

  return 0;
}
