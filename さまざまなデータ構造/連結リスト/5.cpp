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
  cin >> N >> Q;

  // 前方・後方のブロック番号を指す配列 (ない場合は -1 とする)
  vector<int> nex(N, -1), bak(N, -1);

  rep(i, Q) {
    int query = 0;
    cin >> query;

    if(query == 0) {
      // Connect(p,q)
      int p, q;
      cin >> p >> q;
      nex[p] = q;
      bak[q] = p;
    } else {
      // Contract(r)
      int r;
      cin >> r;
      if(nex[r] != -1) {
        bak[nex[r]] = bak[r];
      }
      if(bak[r] != -1) {
        nex[bak[r]] = nex[r];
      }
      nex[r] = bak[r] = -1;
    }
  }

  int ans = 0, now = 0;
  while(now != -1) {
    ans++;
    now = nex[now];
  }
  now = 0;
  while(now != -1) {
    ans++;
    now = bak[now];
  }
  // 車両 0 が 2 回数えられているので、調整する
  ans--;

  debug(ans);
  return 0;
}
