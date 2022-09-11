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
vector<string> func(int n, int l, int r) {

  // l > r のとき、空配列を返却する
  if(l > r)
    return {};

  // n = 0 のとき、空文字列の入った空配列を返却する
  if(n == 0)
    return {""};

  // それ以外のとき
  vector<string> ans;
  // n-1 番目の要素として l を選んだ場合
  for(auto x : func(n - 1, l, r)) {
    ans.push_back(to_string(l) + x);
  }
  // l を選ばなかった場合
  for(auto x : func(n, l + 1, r)) {
    ans.push_back(x);
  }

  return ans;
}

int main() {
  // 入力
  int L, R;
  cin >> L >> R;

  // 答えを求める
  ll ans = 0;
  for(string x : func(10, 0, 9)) {
    ll num = stoll(x);
    if(L <= num && num <= R)
      ans += num;
  }

  // 出力
  cout << ans << endl;
}
