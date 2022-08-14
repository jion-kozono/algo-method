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
  // 入力
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(M);
  rep(i, N) cin >> A[i];
  rep(i, M) cin >> B[i];

  int count = 0;
  // 各ボールがすでにいずれかの箱に入ったか
  vector<bool> used(N, false);

  // 貪欲法(模範解答)
  rep(j, M) {
    rep(i, N) {
      if(used[i])
        continue;
      if(A[i] <= B[j]) {
        count++;
        used[i] = true;
        break;
      }
    }
  }

  debug(count);

  return 0;
}
