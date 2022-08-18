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

vector<int> A;
vector<vector<int>> memo;

int func(int i, int j) {
  if(memo[i][j] != -1)
    return memo[i][j];
  if(i == 0)
    return memo[i][j] = j == 0;

  int flag = 0;
  memo[i][j] = 0;
  if(j >= A[i - 1] && func(i - 1, j - A[i - 1]))
    flag = 1;
  else if(func(i - 1, j))
    flag = 1;
  return flag;
}

int main() {
  int N, X;
  cin >> N >> X;
  A.resize(N);
  rep(i, N) cin >> A[i];
  memo.resize(N + 1, vector<int>(X + 1, -1));
  debug(func(N, X) ? "Yes" : "No");

  return 0;
}
