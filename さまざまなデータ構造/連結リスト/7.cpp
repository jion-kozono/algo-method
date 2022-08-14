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
  int N, Q;
  cin >> N;

  vector<int> runners(N);
  rep(i, N) cin >> runners[i];
  vector<int> front(N, -1), bac(N, -1);

  // 初期化
  rep(i, N) {
    if(i == 0) {
      bac[runners[i]] = runners[i + 1];
    } else if(i == N - 1) {
      front[runners[i]] = runners[i - 1];
    } else {
      front[runners[i]] = runners[i - 1];
      bac[runners[i]] = runners[i + 1];
    }
  }

  cin >> Q;
  rep(i, Q) {
    int query = 0;
    cin >> query;

    if(query == 0) {
      // Overtake
      int v;
      cin >> v;
      if(front[v] == -1) {
        debug("Error");
      } else {
        int f = front[v];
        debug(f);
        int b = bac[v];
        if(front[f] != -1)
          // 前の前にあったやつの後ろ更新
          bac[front[f]] = v;
        if(bac[v] != -1)
          // 後ろにあったやつの前を更新
          front[b] = f;
        // v自信の前後更新
        front[v] = front[f], bac[f] = b;

        bac[v] = f, front[f] = v;
      }
    } else {
      // Dropout
      int v;
      cin >> v;
      int f = front[v];
      int b = bac[v];
      if(f != -1) {
        bac[f] = b;
      }
      if(v != -1) {
        front[b] = f;
      }
      front[v] = bac[v] = -1;
    }
  }

  return 0;
}
