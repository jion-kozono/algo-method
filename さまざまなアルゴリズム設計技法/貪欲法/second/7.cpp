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
  int N;
  cin >> N;
  vector<int> S(N), T(N);
  rep(i, N) cin >> S[i] >> T[i];

  // 以下が模範解答
  // 終了時刻 T が小さい順に id を並び替える
  vector<int> ids(N);
  for(int i = 0; i < N; ++i)
    ids[i] = i;
  sort(ALL(ids), [&](int i, int j) { return T[i] < T[j]; });

  // 終了時刻が早い順に見ていく
  int res = 0;
  int last_time = 0; // 前回の予定の終了時刻
  for(auto i : ids) {
    // 予定 i の開始時刻が、前回終了時刻より早い場合はスキップ
    if(S[i] < last_time)
      continue;

    // 予定を採用する
    ++res;
    last_time = T[i];
  }
  cout << res << endl;
  return 0;
}
