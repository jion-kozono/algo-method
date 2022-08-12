#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) std::begin(x), std::end(x)
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
  int L, R;
  cin >> L >> R;

  // データを受け取る
  int L, R;
  cin >> L >> R;

  int count = 0;
  // 変数 i の全探索
  for(int i = L; i <= R; ++i) {
    // 変数 j の全探索
    for(int j = i + 1; j <= R; ++j) {
      if(i % 10 == j % 10) {
        count++;
      }
    }
  }

  // 答えを出力する
  cout << count << endl;
  return 0;

  // map<int, int> firstDigitNumCountMap;
  // rep3(i, L, R + 1) {
  //   int firstDigitOfI = i % 10;
  //   firstDigitNumCountMap[firstDigitOfI]++;
  // }
  // int ans = 0;
  // for(auto [digitNum, count] : firstDigitNumCountMap) {
  //   switch(count) {
  //   case 0 || 1:
  //     continue;
  //   case 2: {
  //     ans++;
  //     break;
  //   }
  //   default: {
  //     int numerator = 1;
  //     int denominator = 1;
  //     rep(i, 2) {
  //       numerator *= count - i;
  //       denominator *= 2 - i;
  //     }
  //     ans += numerator / denominator;
  //     break;
  //   }
  //   }
  // }
  // cout << ans << endl;
  // return 0;
}
