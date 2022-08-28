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
  cin >> N >> K;
  string S;
  cin >> S;
  vector<int> right(N, -1), left(N, -1);

  rep(i, N) {
    if(i != 0)
      left[i] = i - 1;
    if(i != N - 1)
      right[i] = i + 1;
  }

  ll time = 0;

  int v = K, direct = 1;
  while(1) {
    // v の情報を削除
    right[left[v]] = right[v];
    left[right[v]] = left[v];

    // S[v] で次の方向が決まる (空きマスなら、方向は今のまま)
    if(S[v] == '>') {
      direct = 1;
    }
    if(S[v] == '<') {
      direct = -1;
    }

    // 次に踏む未踏のマス
    int nv;
    if(direct == 1) {
      nv = right[v];
    } else if(direct == -1) {
      nv = left[v];
    }
    // 距離を足し合わせて、v を更新する
    time += abs(v - nv);
    v = nv;

    // 終了条件
    if(v == 0 || v == N - 1) {
      break;
    }
  }

  debug(time);

  return 0;
}
