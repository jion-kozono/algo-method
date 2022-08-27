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
  int H, W;
  cin >> H >> W;
  int dx[5] = {0, -1, 0, 1, 0};
  int dy[5] = {0, 0, 1, 0, -1};
  vector<vector<int>> grid(H, vector<int>(W));
  vector<string> S(H);
  rep(i, H) {
    string s;
    cin >> s;
    rep(j, W) {
      int n = s[j] == '#' ? 1 : 0;
      grid[i][j] = n;
    }
  }

  int Q;
  cin >> Q;
  rep(i, Q) {
    int query, p, q;
    cin >> query >> p >> q;
    if(query == 0) {
      // Push
      rep(j, 5) {
        int x = q + dx[j];
        int y = p + dy[j];
        if(0 <= x && x < W && 0 <= y && y < H)
          grid[y][x] = 1 - grid[y][x];
      }
    } else {
      // Get
      int count = 0;
      rep(j, 5) {
        int x = q + dx[j];
        int y = p + dy[j];
        if(0 <= x && x < W && 0 <= y && y < H)
          count += grid[y][x];
      }
      debug(count);
    }
  }
  return 0;
}
