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

vector<ll> calcDivisors(ll n) {
  vector<ll> divisors;
  for(ll i = 1; i * i <= n; i++) {
    if(n % i != 0)
      continue;
    divisors.push_back(i);
    if(n / i != i)
      divisors.push_back(n / i);
  }
  sort(ALL(divisors));
  return divisors;
}

int main() {
  ll A, B;
  cin >> A >> B;

  vector<ll> divisors = calcDivisors(A - B);

  ll count = 0;
  // 模範解答: x > Bであることを利用
  for(auto d : divisors)
    if(d > B)
      count++;

  //自作コード: x > Bであることを利用していない
  // rep(i, divisors.size()) {
  //   // A mod x = B
  //   if(A % divisors[i] == B) {
  //     count++;
  //   }
  // }
  debug(count);

  return 0;
}
