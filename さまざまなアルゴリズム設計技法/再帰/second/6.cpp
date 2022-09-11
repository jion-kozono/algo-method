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

// func(i, j) の値を記録するメモ(配列)を用意する
// -1 なら未記録、0 なら false、1 なら true
vector<vector<int>> memo;
vector<int> A;

// 再帰関数 (A の前から i 個の中からいくつか選んで j を作れるか)
int check(int i, int j) {
  // 過去に計算済みの場合メモに記録された値を返す
  if(memo[i][j] != -1)
    return memo[i][j];

  // i = 0 のとき、 j = 0 なら true
  if(i == 0) {
    return memo[i][j] = j == 0;
  }

  int flag = 0;
  memo[i][j] = 0;
  // 前から i−1 個の数字を用いて j − Ai−1を作ることができる。(j≥Ai−1)
  if(j >= A[i - 1] && check(i - 1, j - A[i - 1]))
    flag = 1;
  // 前から i−1 個の数字を用いて j を作ることができる。
  if(check(i - 1, j))
    flag = 1;

  return flag;
}

int main() {
  int N, X;
  cin >> N >> X;
  A.resize(N);
  rep(i, N) cin >> A[i];

  memo.resize(N + 1, vector<int>(X + 1, -1));

  debug(check(N, X) ? "Yes" : "No");
  return 0;
}
