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

int directionX[9] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
int directionY[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
int main() {
  int H, W, x, y;
  cin >> H >> W >> x >> y;
  vector<vector<char>> grid(H, vector<char>(W));

  rep(i, H) rep(j, W) {
    char c;
    cin >> c;
    grid[i][j] = c;
  }

  for(int i = x - 1; i < x + 2; ++i) {
    for(int j = y - 1; j < y + 2; ++j) {
      cout << grid[i][j];
    }
    cout << endl;
  }
  //以下より上の方が効率が良い
  // rep(i, 9) {
  //   int h = x + directionX[i];
  //   int w = y + directionY[i];

  //   cout << grid[h][w];
  //   if((i + 1) % 3 == 0) {
  //     cout << endl;
  //   }
  // }

  return 0;
}
