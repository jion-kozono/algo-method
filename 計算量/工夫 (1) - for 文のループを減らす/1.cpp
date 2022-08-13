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
  int N;
  cin >> N;

  int maxNum = 0;
  int minNum = INT_MAX;

  rep(i, N) {
    int a;
    cin >> a;
    maxNum = max(maxNum, a);
    minNum = min(minNum, a);
  }
  int maxDist = maxNum - minNum;

  // 以下ではTLE
  // vector<int> A(N);
  // rep(i, N) cin >> A[i];

  // int maxDist = 0;
  // rep(i, N - 1) {
  //   rep3(j, i + 1, N) {
  //     int temp = abs(A[i] - A[j]);
  //     maxDist = max(maxDist, temp);
  //   }
  // }

  cout << maxDist << endl;
  return 0;
}
