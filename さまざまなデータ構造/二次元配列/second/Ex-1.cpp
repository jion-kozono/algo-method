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
  ll H, W;
  cin >> H >> W;
  vector<vector<int>> grid(H, vector<int>(W));
  rep(i, H) {
    string s;
    cin >> s;
    rep(j, s.size()) { grid[i][j] = s[j] == '#' ? 1 : 0; }
  }

  vector<int> sum_row(H), sum_column(W);
  rep(i, H) rep(j, W) { sum_row[i] += grid[i][j]; }
  rep(i, W) rep(j, H) { sum_column[i] += grid[j][i]; }

  ll Q;
  cin >> Q;
  rep(i, Q) {
    ll p, q;
    cin >> p >> q;

    ll count = sum_row[p] + sum_column[q] - grid[p][q];
    debug(count);
  }

  //以下だとTLE
  // ll Q;
  // cin >> Q;
  // rep(i, Q) {
  //   ll p, q;
  //   cin >> p >> q;

  //   ll count = 0;
  //   rep(i, H) { count += grid[i][q]; }
  //   rep(i, W) { count += grid[p][i]; }

  //   // remove duplicated
  //   if(grid[p][q])
  //     count--;
  //   debug(count);
  // }

  return 0;
}
