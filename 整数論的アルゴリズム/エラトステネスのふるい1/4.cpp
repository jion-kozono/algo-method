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

vector<bool> Eratosthenes(int n) {
  vector<bool> isPrime(n + 1, true);

  isPrime[0] = isPrime[1] = false;
  for(int i = 2; i <= n; i++) {
    if(!isPrime[i])
      continue;
    for(int k = i * 2; k <= n; k += i) {
      isPrime[k] = false;
    }
  }

  return isPrime;
}

int main() {
  int N;
  cin >> N;
  vector<bool> isPrime = Eratosthenes(N);

  int count = 0;
  for(int i = 2; i + 2 <= N; i++) {
    if(isPrime[i] && isPrime[i + 2]) {
      count++;
    }
  }
  debug(count);
  return 0;
}
