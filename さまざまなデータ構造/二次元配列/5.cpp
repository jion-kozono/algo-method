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

int directionsX[4] = {0, -1, 0, 1};
int directionsY[4] = {-1, 0, 1, 0};
int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> grid(H, vector<int>(W));

  rep(i, H) {
    string s;
    cin >> s;
    rep(j, W) { grid[i][j] = s[j] == '#' ? 1 : 0; }
  }

  int Q;
  cin >> Q;
  rep(i, Q) {
    int count = 0;
    int p, q;
    cin >> p >> q;
    rep(d, 4) {
      int x = p + directionsX[d];
      int y = q + directionsY[d];
      if(0 <= x && x < H && 0 <= y && y < W)
        count += grid[x][y];
    }
    debug(count);
  }
  return 0;
}
