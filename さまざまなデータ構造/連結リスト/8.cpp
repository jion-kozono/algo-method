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
  int N, K;
  string S;
  cin >> N >> K >> S;

  vector<int> right(N, -1), left(N, -1);

  // 初期化
  rep(i, N) {
    if(i < N - 1) {
      right[i] = i + 1;
    }
    if(1 > 0) {
      left[i] = i - 1;
    }
  }

  // 次に進むべき方向と今見ているマス
  int direct = 1, v = K;
  // 答えを表す変数 (int 型には収まらないことに注意)
  long long ans = 0;

  // 終了条件
  while(v != 0 && v != N - 1) {
    // vの情報を削除
    right[left[v]] = right[v];
    left[right[v]] = left[v];

    // S[v] で次の方向が決まる (空きマスなら、方向は今のまま)
    if(S[v] == '>')
      direct = 1;
    if(S[v] == '<')
      direct = -1;

    // 次に踏む未踏のマス
    int nv;
    if(direct == 1) {
      nv = right[v];
    } else if(direct == -1) {
      nv = left[v];
    }

    // 距離を足し合わせて、v を更新する
    ans += abs(nv - v);
    v = nv;
  }

  debug(ans);
  return 0;
}
