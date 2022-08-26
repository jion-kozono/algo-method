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
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  // 反転させると可変長配列は高速に処理できる
  reverse(ALL(A));

  int Q;
  cin >> Q;
  rep(i, Q) {
    int query_type;
    cin >> query_type;
    if(query_type == 0) {
      // PushFront
      int v;
      cin >> v;
      A.push_back(v);
    } else {
      // PopFront
      if(A.empty()) {
        debug("Error");
      } else {
        int v = A[A.size() - 1];
        debug(v);
        A.pop_back();
      }
    }
  }
  //　以下では遅い
  // rep(i, Q) {
  //   int query_type;
  //   cin >> query_type;

  //   if(query_type == 0) {
  //     // PushFront
  //     int v;
  //     cin >> v;
  //     A.insert(A.begin(), v);
  //   } else {
  //     // PopFront
  //     if(A.empty()) {
  //       debug("Error");
  //     } else {
  //       int v = A[0];
  //       debug(v);
  //       A.erase(A.begin());
  //     }
  //   }
  // }
  return 0;
}
