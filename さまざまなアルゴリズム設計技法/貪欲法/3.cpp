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
  int X;
  cin >> X;
  vector<int> A(4);
  for(int i = 0; i < 4; ++i)
    cin >> A[i];

  // 模範解答
  // コインの金額
  const vector<int> coins = {50, 10, 5, 1};

  // 貪欲法
  int res = 0;
  for(int i = 0; i < 4; ++i) {
    // コインの枚数制限 (A[i] 枚) がないときの枚数
    int add = X / coins[i];

    // 枚数制限を考慮してコインの使用枚数を求める
    add = min(add, A[i]);
    res += add;

    // 残り金額を求める
    X -= coins[i] * add;
  }
  debug(res);

  // 以下が自作コード(適切な貪欲法ではないかも)
  // int X, yen50, yen10, yen5, yen1;
  // cin >> X >> yen50 >> yen10 >> yen5 >> yen1;
  //
  // int count = 0;
  // int currentSum = 0;
  // while(currentSum < X) {
  //   if(currentSum + 50 <= X && yen50) {
  //     yen50--;
  //     count++;
  //     currentSum += 50;
  //     continue;
  //   } else if(currentSum + 10 <= X && yen10) {
  //     yen10--;
  //     count++;
  //     currentSum += 10;
  //     continue;
  //   } else if(currentSum + 5 <= X && yen5) {
  //     yen5--;
  //     count++;
  //     currentSum += 5;
  //     continue;
  //   } else {
  //     yen1--;
  //     count++;
  //     currentSum++;
  //     continue;
  //   }
  // }
  // debug(count);

  return 0;
}
