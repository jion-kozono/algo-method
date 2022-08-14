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
  int N;
  cin >> N;

  // 自作のqueueを使ったやり方
  queue<int> A;
  rep3(i, 1, N + 1) { A.push(i); }

  while(A.size() > 1) {
    A.pop();
    A.push(A.front());
    A.pop();
  }

  debug(A.front());

  // 以下が模範解答
  // 数字 i の右隣・左隣にある数字を表す配列
  // vector<int> nex(N + 1, 0), pre(N + 1, 0);
  // // 配列の初期化
  // for(int i = 1; i <= N; ++i) {
  //   nex[i] = i + 1;
  //   if(i == N) {
  //     nex[i] = 1;
  //   }
  //   pre[i] = i - 1;
  //   if(i == 1) {
  //     pre[i] = N;
  //   }
  // }

  // int num = 1; // 次に除外する数字
  // for(int i = 0; i < N - 1; ++i) {
  //   // num の除外と更新
  //   pre[nex[num]] = pre[num];
  //   nex[pre[num]] = nex[num];
  //   num = nex[nex[num]];
  // }
  // // 最終的に残った数が答え
  // cout << num << endl;
  return 0;
}
