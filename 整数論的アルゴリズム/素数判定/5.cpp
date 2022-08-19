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

bool isPrime(int x) {
  if(x == 1)
    return false;
  for(int i = 2; i * i <= x; i++) {
    if(x % i == 0)
      return false;
  }
  return true;
}

int main() {
  int N;
  cin >> N;

  // 模範解答
  for(int q = 2; q <= N; ++q) {
    if(isPrime(q) && isPrime(N - q)) {
      cout << q << endl;
      return 0;
    }
  }

  //自作コード：ちょっと冗長
  // int ans = N;
  // for(int i = N; i >= 2; i--) {
  //   if(!isPrime(i))
  //     continue;
  //   int q = N - i;
  //   if(isPrime(q)) {
  //     ans = min(ans, q);
  //   }
  // }
  // debug(ans);

  // return 0;
}
