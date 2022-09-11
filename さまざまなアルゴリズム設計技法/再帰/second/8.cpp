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

// 再帰関数 (N = n, L = l, R = r のときの問題の答え)
int func(int n, int l, int r) {
  // n = 0 のとき、答えは空配列のみ (1 つ)
  if(n == 0)
    return 1;

  // l > r のとき、答えは存在しない
  if(l > r)
    return 0;

  // それ以外のとき
  int ans = func(n - 1, l + 1, r) + func(n, l + 1, r);

  return ans;
}

int main() {
  // 入力
  int N, L, R;
  cin >> N >> L >> R;

  // 出力
  int ans = func(N, L, R);
  debug(ans);
}
