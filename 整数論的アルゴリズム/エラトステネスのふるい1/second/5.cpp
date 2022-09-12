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

vector<bool> Eratosthenes(ll N) {
  vector<bool> is_prime(N + 1, true);

  is_prime[0] = is_prime[1] = false;
  for(ll p = 2; p <= N; p++) {
    if(!is_prime[p])
      continue;

    for(ll k = p * 2; k <= N; k += p) {
      is_prime[k] = false;
    }
  }

  return is_prime;
}

int main() {
  ll N;
  cin >> N;

  auto is_prime = Eratosthenes(N);
  ll count = 0;
  for(ll i = 2; i <= N - i; i++) {
    if(is_prime[i] && is_prime[N - i])
      count++;
  }
  debug(count);
  return 0;
}
