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
  vector<bool> isPrime(101, true);
  vector<bool> isTurnedOver(101, false);
  isPrime[0] = isPrime[1] = false;
  for(int i = 2; i <= 100; i += 2) {
    if(!isPrime[i])
      continue;
    isPrime[i] = false;
    isTurnedOver[i] = true;
  }
  for(int i = 3; i <= 100; i += 3) {
    if(!isPrime[i])
      continue;
    isPrime[i] = false;
    isTurnedOver[i] = true;
  }
  for(int i = 5; i <= 100; i += 5) {
    if(!isPrime[i])
      continue;
    isPrime[i] = false;
    isTurnedOver[i] = true;
  }
  for(int i = 7; i <= 100; i++) {
    if(!isPrime[i])
      continue;
    for(int k = i * 2; k <= 100; k += i) {
      isPrime[k] = false;
    }
  }

  int count = 0;
  rep3(i, 8, 101) {
    if(!isPrime[i] && !isTurnedOver[i]) {
      count++;
    }
  }
  debug(count);
  return 0;
}
